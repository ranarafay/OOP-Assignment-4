/*
Rao Muhammad Rafay
P200636
A
*/

#include <iostream>
using namespace std;

class ALU
{
    // private:

    int NoOfAdders;
    int NoOfSubtractor;
    int NoOfRegisters;
    int sizeOfRegisters;

public:
    // default constructor
    ALU(){}

    // parameterized constructor
    ALU(int no_ad, int no_sub, int no_reg, int si_reg)
    {
        NoOfAdders = no_ad;
        NoOfSubtractor = no_sub;
        NoOfRegisters = no_reg;
        sizeOfRegisters = si_reg;
    }

    // setter
    void set(int no_ad, int no_sub, int no_reg, int si_reg)
    {
        NoOfAdders = no_ad;
        NoOfSubtractor = no_sub;
        NoOfRegisters = no_reg;
        sizeOfRegisters = si_reg;
    }

    // getters
    int getNoOfAdders()
    {
        return NoOfAdders;
    }
    int getNoOfSubtractor()
    {
        return NoOfSubtractor;
    }
    int getNoOfRegisters()
    {
        return NoOfRegisters;
    }
    int getsizeOfRegisters()
    {
        return sizeOfRegisters;
    }
};

class ControlUnit
{
    // private:

    float clock;

public:
    // default constructor
    ControlUnit()
    {
        clock = 0.0;
    }

    // parameterized constructor
    ControlUnit(float cl)
    {
        clock = cl;
    }

    // setter
    void set(float cl)
    {
        clock = cl;
    }

    // getter
    float getClock()
    {
        return clock;
    }
};

// COMPOSITION of class "CPU" from "ALU" and "ControlUnit"

class CPU
{
    // private:

    ALU* alu;
    ControlUnit* cu;

public:
    // default constructor
    CPU()
    {
    }

    // parameterized constructor
    CPU(int no_ad, int no_sub, int no_reg, int si_reg, float cl)
    {
        alu = new ALU(no_ad, no_sub, no_reg, si_reg);
        cu = new ControlUnit(cl);

        setalu(alu);
        setcu(cu);
    }

    // setter
    void setalu(ALU* obj)
    {
        alu = obj;
    }

    void setcu(ControlUnit* obj)
    {
        cu = obj;
    }

    void set(int no_ad, int no_sub, int no_reg, int si_reg, float cl)
    {
        alu = new ALU(no_ad, no_sub, no_reg, si_reg);
        cu = new ControlUnit(cl);

        setalu(alu);
        setcu(cu);
    }

    // getter
    ALU getAlu()
    {
        return *(alu);
    }

    ControlUnit getCu()
    {
        return *(cu);
    }

    ~CPU()
    {
        // to destroy parts
        delete alu;
        delete cu;
    }
};

class MainMemory
{
    // private:

    int capacity;
    string technologyType;

public:
    // default constructor
    MainMemory()
    {
    }

    // parameterized constructor
    MainMemory(int cp, string tech_type)
    {
        capacity = cp;
        technologyType = tech_type;
    }

    // setter
    void set(int cp, string tech_type)
    {
        capacity = cp;
        technologyType = tech_type;
    }

    // getters
    int getCapacity()
    {
        return capacity;
    }

    string getTechnologyType()
    {
        return technologyType;
    }
};

class Port
{
    // private:

    string type;
    int baud_rate;

public:
    // default constructor
    Port()
    {
    }

    // parameterized constructor
    Port(string t, int br)
    {
        type = t;
        baud_rate = br;
    }

    // setter
    void set(string t, int br)
    {
        type = t;
        baud_rate = br;
    }

    // getters
    string getType()
    {
        return type;
    }

    int getBaudRate()
    {
        return baud_rate;
    }
};

// class "MotherBoard" composed of class "Port" and aggregration of class "MainMemory"
class MotherBoard
{
    // private:

    Port* ports;
    MainMemory mm;
    int len;

public:
    // default constructor
    MotherBoard()
    {
    }

    // parameterized constructor
    MotherBoard(int cp, string tech_type, string t, int br)
    {
        // for Port

        int l;
        cout << "How many ports you want to enter: " << endl;
        cin >> l;
        len = l;
        ports = new Port[len];

        // initialize 1st object of array from arguments
        ports[0].set(t, br);

        for (int i = 1; i <= len + 1; i++)
        {
            string t;
            int br;

            cout << "For Port # " << i << endl;

            cout << "Type: ";
            cin >> t;
            cout << "Baudrate: ";
            cin >> br;

            ports[i].set(t, br);
        }

        // for port
        setPort(ports);

        // for MainMemory
        mm.set(cp, tech_type);
        setmm(mm);
    }

    // setters
    void setPort(Port* obj)
    {
        ports = obj;
    }

    void setmm(MainMemory obj)
    {
        mm = obj;
    }

    void set(int cp, string tech_type, string t, int br)
    {
        // for Port

        int l;
        cout << "How many ports you want to enter: " << endl;
        cin >> l;
        len = l;
        ports = new Port[len];

        // initialize 1st object of array from arguments
        ports[0].set(t, br);

        for (int i = 1; i <= len + 1; i++)
        {
            string t;
            int br;

            cout << "For Port # " << i << endl;

            cout << "Type: ";
            cin >> t;
            cout << "Baudrate: ";
            cin >> br;

            ports[i].set(t, br);
        }

        // for port
        setPort(ports);

        // for MainMemory
        mm.set(cp, tech_type);
        setmm(mm);
    }

    // getter
    Port* getPort()
    {
        return ports;
    }

    MainMemory getMainMemory()
    {
        return mm;
    }

    int getlen()
    {
        return len;
    }

    ~MotherBoard()
    {
        // to destroy part
        delete ports;
    }
};

class PhysicalMemory
{
    // private:
    int capacity;

public:
    // default constructor
    PhysicalMemory()
    {
    }

    // parameterized constructor
    PhysicalMemory(int c)
    {
        capacity = c;
    }

    // setter
    void set(int c)
    {
        capacity = c;
    }

    // getter
    int getCapacity()
    {
        return capacity;
    }
};

// class "Computer" aggregation of "PhysicalMemory", "CPU" and "MotherBoard"
class Computer
{
    // private:

    PhysicalMemory pm;
    MotherBoard mb;
    CPU cpu;

public:
    // default constructor
    Computer() {}

    // parameterized constructor
    Computer(int c, int cp, string tech_type, string t, int br, int no_ad, int no_sub, int no_reg, int si_reg, float cl)
    {
        pm.set(c);
        mb.set(cp, tech_type, t, br);
        cpu.set(no_ad, no_sub, no_reg, si_reg, cl);

        setpm(pm);
        setmb(mb);
        setcpu(cpu);
    }

    // setter
    void setpm(PhysicalMemory obj)
    {
        pm = obj;
    }

    void setmb(MotherBoard obj)
    {
        mb = obj;
    }

    void setcpu(CPU obj)
    {
        cpu = obj;
    }

    void set(int c, int cp, string tech_type, string t, int br, int no_ad, int no_sub, int no_reg, int si_reg, float cl)
    {
        pm.set(c);
        mb.set(cp, tech_type, t, br);
        cpu.set(no_ad, no_sub, no_reg, si_reg, cl);

        setpm(pm);
        setmb(mb);
        setcpu(cpu);
    }

    // getters
    PhysicalMemory getPhysicalMemory()
    {
        return pm;
    }

    MotherBoard getMotherBoard()
    {
        return mb;
    }

    CPU getCPU()
    {
        return cpu;
    }
};

class Shop
{
    // private:

    Computer* comp;
    int len;

public:
    // setter
    void setcomp(Computer* obj)
    {
        comp = obj;
    }

    // getter
    Computer* getcomp()
    {
        return comp;
    }

    void manufactureComputer()
    {

        int l;
        cout << "Enter number of computers you want to Manufacture: ";
        cin >> l;
        len = l;
        cout << endl;

        comp = new Computer[len];

        for (int i = 0; i < len; i++)
        {
            // physical memory
            int pm_capacity;

            // for mother board
            int mm_capacity; // for main memory
            string techtype;
            string type; // for port
            int baudrate;

            // for CPU
            int NoOfAdders; // for ALU
            int NoOfSubtractor;
            int NoOfRegisters;
            int sizeOfRegisters;

            float clock; // for CU

            // taking necessary specifications from user
            cout << "Enter details for " << i + 1 << " Computer: " << endl;

            cout << "PHYSICAL MEMORY: " << endl;
            cout << "\n";
            cout << "Enter the Capacity: ";
            cin >> pm_capacity;

            cout << "MOTHER BOARD: " << endl;
            cout << "\n";
            cout << "Enter the Capacity: "; // for main memory
            cin >> mm_capacity;
            cout << endl;
            cout << "Enter the Technology Type: ";
            cin >> techtype; // for port
            cout << endl;
            cout << "Enter the Type: ";
            cin >> type;
            cout << endl;
            cout << "Enter the Baudrate: ";
            cin >> baudrate;
            cout << endl;

            cout << "CPU: " << endl;
            cout << "\n";
            cout << "Enter the Number Of Adders: "; // for ALU
            cin >> mm_capacity;
            cout << endl;
            cout << "Enter the Number Of Subtractors: ";
            cin >> techtype;
            cout << endl;
            cout << "Enter the Number Of Registers: ";
            cin >> type;
            cout << endl;
            cout << "Enter the Size Of Registers: ";
            cin >> baudrate;
            cout << endl;
            cout << "Enter the Clock: "; // for CU
            cin >> clock;
            cout << endl;

            // storing in dynamic array pointing to computer
            comp[i].set(pm_capacity, mm_capacity, techtype, type, baudrate, NoOfAdders, NoOfSubtractor, NoOfRegisters, sizeOfRegisters, clock);
        }
        setcomp(comp);
    }

    // function to show list of computers manufactured
    void viewList()
    {
        for (int i = 0; i < len; i++)
        {
            // temporaryu istantiation for using in this scope
            Computer* obj;
            obj = getcomp();

            cout << "Showing details of Manufactured Computer # " << i + 1;
            cout << "\n"
                << endl;

            cout << "PHYSICAL MEMORY: "; // physical memory
            cout << "\n"
                << endl;
            cout << "Capacity: " << obj->getPhysicalMemory().getCapacity() << endl;

            cout << "MOTHER BOARD: "; // mother board
            cout << "\n"
                << endl;
            cout << "Capacity: " << obj->getMotherBoard().getMainMemory().getCapacity() << endl; // main memory
            cout << "Technology Type: " << obj->getMotherBoard().getMainMemory().getTechnologyType() << endl;
            if (obj->getMotherBoard().getlen() > 1) // for port
            {
                for (int i = 0; i < obj->getMotherBoard().getlen(); i++)
                {
                    cout << "Port # " << i + 1 << ": " << endl;
                    cout << "Type: " << (obj->getMotherBoard().getPort())[i].getType() << endl;
                    cout << "Baudrate: " << (obj->getMotherBoard().getPort())[i].getBaudRate() << endl;
                }
            }
            else
            {
                cout << "Port: " << endl;
                cout << "Type: " << (obj->getMotherBoard().getPort())[i].getType() << endl;
                cout << "Baudrate: " << (obj->getMotherBoard().getPort())[i].getBaudRate() << endl;
            }

            cout << "CPU: "; // cpu
            cout << "\n"
                << endl;
            cout << "No Of Adders: " << obj->getCPU().getAlu().getNoOfAdders() << endl; // alu
            cout << "No Of Subtractors: " << obj->getCPU().getAlu().getNoOfSubtractor() << endl;
            cout << "No Of Registers: " << obj->getCPU().getAlu().getNoOfRegisters() << endl;
            cout << "Size Of Registers: " << obj->getCPU().getAlu().getsizeOfRegisters() << endl;
            cout << "Clock: " << obj->getCPU().getCu().getClock() << endl;
        }
    }
};

#include <iostream>
using namespace std;

int main()
{
    
    
    return 0;
}
