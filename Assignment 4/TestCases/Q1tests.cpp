
#include "ALU.cpp";
#include "ControlUnit.cpp";
#include "CPU.cpp";
#include "PhysicalMemory.cpp";
#include "MainMemory.cpp";
#include "Port.cpp";
#include "MotherBoard.cpp";
#include "Computer.cpp";
#include "Shop.cpp";
#include <gtest/gtest.h>

// ____________________________QUESTION 1___________________________________________

TEST(Q2, CPU) { 

int NoOfAdders=2,NoOfSubtractors=2,NoOfRegisters=8,sizeOfRegisters=16;
float clk=1.8;
    CPU cpu(NoOfAdders,NoOfSubtractors,NoOfRegisters,sizeOfRegisters,clk);

  ASSERT_EQ(NoOfAdders, cpu.getAlu().getNoOfAdders());
  ASSERT_EQ(NoOfSubtractor, cpu.getAlu().getNoOfSubtractors()); 
  ASSERT_EQ(NoOfRegisters, cpu.getAlu().getNoOfRegisters()); 
  ASSERT_EQ(sizeOfRegisters, cpu.getAlu().getsizeOfRegisters()); 
   ASSERT_EQ(clk, cpu.getCu().getClock());  
  
  
}

//-----------------------------------------------------------------------------

TEST(Q2, MainMemory) { 

int capacity=6554;
string technologyType="Semiconductor";
  
  MainMemory ram(capacity,technologyType);
  
   ASSERT_EQ(capacity, ram.getCapacity());  
    ASSERT_EQ(technologyType, ram.getTechnologyType());  
  
}
 //----------------------------------------------------------------------

TEST(Q2, port) { 

int baud_rate=9600;
string type="VGI";
  
  Port p(type,baud_rate);
  
   ASSERT_EQ(type, p.getType());  
    ASSERT_EQ(baud_rate, p.getBaudRate());  
  
}

//--------------------------------------------------------------------------


TEST(Q2, PhysicalMemory) { 
int capacity=6554;
PhysicalMemory hd(capacity);
ASSERT_EQ(capacity, hd.getCapacity());  
 
}
//--------------------------------------------------------------------------


TEST(Q2, ManualManufacturing) { 
Shop fastComputers;
  fastComputers.manufactureComputer();//Loop through the menu to check working of objects creation
  cout<<"\n\n\n";
 fastComputers.viewList(); // Display Array of Computers created
}




 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

