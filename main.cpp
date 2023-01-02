#include <iostream>
#include <cmath>
#include <time.h>
#include <conio.h>

int main(){

  // Display title
  std::cout << "\nSystem Train\n";
  std::cout << "------------\n";

  // 3 Medals to rate how efficient training was.
  int goldenMedal;
  int silverMedal;
  int bronzeMedal;

  // Input all medals
  std::cout << "Golden Medal(MIN): ";
  std::cin >> goldenMedal;
  std::cout << "Silver Medal(MIN): ";
  std::cin >> silverMedal;
  std::cout << "Bronze Medal(MIN): ";
  std::cin >> bronzeMedal;

  // Display starting training && Get current time (Starting Traning)
  time_t startTime = time(NULL);
  std::string timeDisplayed = ctime(&startTime);
  std::cout << "\nStarted traning at " << timeDisplayed;

  // Wait until response (When traning finishes)
  getch();

  // Get time after traning finished
  time_t endTime = time(NULL);
  timeDisplayed = ctime(&endTime);

  // Display traning finished
  std::cout << "\nFinished training at " << timeDisplayed;

  // Calculate duration of traning and display information
  std::cout << "\nFINAL TIME\n";
  int duration = floor(endTime - startTime);

  std::cout << "----------\n";

  // Convert total time seconds to format hh:mm:ss
  int hours = floor(duration/3600);
  int minutes = floor((duration%3600)/60);
  int seconds = floor(minutes%60);

  // Display results
  std::cout << hours << " H " << minutes << " MIN " << seconds << " SEC\n";

  std::cout << "\nMEDAL\n";
  std::cout << "-----\n";

  // Calculate and display medal
  if (minutes <= goldenMedal){
    std::cout << "Golden Medal: Did it in less than " << goldenMedal << " minutes.\n";
    std::cout << "Great job.\n\n";
  } else if(minutes <= silverMedal){
    std::cout << "Silver Medal: Did it in less than " << silverMedal << " minutes.\n";
    std::cout << "You still have to master it.\n\n";
  } else if(minutes <= bronzeMedal){
    std::cout << "Bronze Medal: Did it in less than " << bronzeMedal << " minutes.\n";
    std::cout << "You have no idea about what you are doing.\n\n";
  } else {
    std::cout << "You have no medal, you couldn't do it in less than " << bronzeMedal << " minutes.\n";
    std::cout << "You fucking suck at this, try training more.\n\n";
  }

  return 0;
}