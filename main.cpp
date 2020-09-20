#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;

void intro()//greetins and project info
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\n\n\n\n\n\n\t\t\t\t-------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\t|        %%      %%                                                                             |"<<endl;
    cout<<"\t\t\t\t|        %%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%                           |"<<endl;
    cout<<"\t\t\t\t|        %%      %% %%      %%      %%      %%  %% %%  %%% %% %%                                |"<<endl;
    cout<<"\t\t\t\t|        %%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%                             |"<<endl;
    cout<<"\t\t\t\t|        %%  %%  %% %%      %%      %%      %%  %% %%      %% %%                                |"<<endl;
    cout<<"\t\t\t\t|        %%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%                           |"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\t|                   $$$$$$$$  $$$$$                                                             |"<<endl;
    cout<<"\t\t\t\t|                      $$     $   $                                                             |"<<endl;
    cout<<"\t\t\t\t|                      $$     $$$$$                                                             |"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\t|   |======   =====    ||   ||   ||===||     ||===||  ||                                        |"<<endl;
    cout<<"\t\t\t\t|   |        ||        ||   ||   ||   ||     ||   ||  ||                                        |"<<endl;
    cout<<"\t\t\t\t|    =====|  ||        ||===||   ||   ||     ||   ||  ||                                        |"<<endl;
    cout<<"\t\t\t\t|         |  ||        ||   ||   ||   ||     ||   ||  ||      Management System                 |"<<endl;
    cout<<"\t\t\t\t|    ======   ======   ||   ||   ||===||     ||===||  ||====                                    |"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\t|                                                                                               |"<<endl;
    cout<<"\t\t\t\tby CODE BLOCKS CODER....-------------------------------------------------------------------------     ";
    getch();
    system("cls");




        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^";
         cout<<"\t\t\n\t\t\t\t\t\t\t\t  CODE BLOCKS CODER";
        cout<<"\n\t\t\t\t\t\t\t       ^^^^^^^^^^^^^^^^^^^^^^";
        cout<<"\n\n\n\t\t                            Project Members :  ";
        cout<<"\tNADIM NAWSHAD               20-42609-1  \n";
        cout<<"\t\t\t\t\t\t\t\tMD. FAHIM KABIR  CHOWDHURY  20-42595-1  \n";
        cout<<"\t\t\t\t\t\t\t\tSANJANA AHMED SHUSME        20-42589-1  \n";
        cout<<"\t\t\t\t\t\t\t\tTAHASEN HOSSAIN             20-42584-1  \n";
        cout<<"\t\t\t\t\t\t\t\tMD ASHIKUZZAMAN SRESTO      20-42609-1  \n";
        cout<<"\n\n\n\t\t                            Under The guidence of \n \t\t\t\t\t\t\t\tMd.Nazmul Hossain\n\t\t\t\t\t\t\t\tLECTURER Department of Computer Science\n\t\t\t\t\t\t\t\tFaculty of Science and Technology\n\t\t\t\t\t\t\t\tAmerican International University-Bangladesh \n";
        cout<<"\n\n\n\t\t                            Press any key to go in the next page  ";
        getch();
        system("cls");


        cout<< "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   THEME OF THE PROJECT                \t\t\t\n\n"
        <<"\t\t\t\t\t********************************************************************************************\n\n"

        <<"\t\t\n\t\t\t\t\t\ Every school needs to maintain data bases of the students , teachers and admin panel etc.\n\t\t\t\t\t\ The data base on the students is required for general purpose. School management is a software\n\t\t\t\t\t development by a team of students as part of the curriculum of CSE .\n\n"
        <<"\n\t\t\t\t\t This software is useful to maintain updated and error free status of all the student\n\t\t\t\t\t and teacher.Here a student also a teacher can register by username\n"
        <<"\t\t\t\t\t password. A student can see teacher's teaching schedule, can show the details by id. When a student leaves\n\t\t\t\t\t the school authority can delete his record.. A teacher can also set the result of the student from his account,\n "
        <<"\t\t\t\t\t also can show his details.\n\n\n";
        cout<< "\t\t\t\t\t Press any key to go in next page   ";
        getch();
        system("cls");
}

struct student
{
string fname;//first name of the student
string lname;//last name of the student
string father_name;//father name of the student
string mother_name;//mother name of the student
string religion;//religion of the student
string blood;//blood group of the student
string admission_date;//admission date of the student
int admission_class;//admission class of the student
string age;//age of the student
string gender;
int sID;//gender of the student
}studentData;

struct teacher
{
 string fst_name;//first name of teacher
 string lst_name;//last name of teacher
 string qualification;//Qualification of teacher
 string exp;//Experiance of the person
 string rank;//Rank
 string subj;//subject whos he/she teach
 string lec;//Lecture per Week
 string addrs;//Adders of teacher home
 string cel_no;//Phone number
 string blod_grp;//Bool Group
 string serves;//Number of years  in School
 int tID;//Number of years  in School
}teacherData;//Variable of teacher type

struct hour
{

 string scls6;
 string scls7;
 string scls8;
 string scls9;
 string scls10;
 string mcls6;
 string mcls7;
 string mcls8;
 string mcls9;
 string mcls10;
 int teching_id;
}techHour;


struct result
{
   float ban;
   float eng;
   float math;
   float social;
   float science;
   float islam;
   int st_id;
}res;

int main()
{


intro();
    loop:
    int match;
    int choice;
    while(choice!=0)
{

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
 cout<<"\n\n\t\t\t\t\t\t\t\t\tLOGIN OR REGISTRATION\n\n";
 cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
 cout<<"\n\t\t\t\t\t\t\t\t\tEnter your choice: "<<endl<<endl;
 cout<<"\t\t\t\t\t\t\t\t\t1. Registration"<<endl;
 cout<<"\t\t\t\t\t\t\t\t\t2. Login"<<endl;
 cout<<"\t\t\t\t\t\t\t\t\t3. Forgot Password "<<endl;
 cout<<"\t\t\t\t\t\t\t\t\t0. Exit program"<<endl<<endl;
 cout<<"\t\t\t\t\t\t\t\t\tSelect Your Option  :    ";
 cin>>choice;

 system("cls");

 switch(choice)
 {
 case 1:
     {
        int ch11;
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tREGISTRATION AS A \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\tChoose your option   :  "<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t1. STUDENT    "<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\t2. TEACHER    "<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\tSelect Your option :    ";
        cin>>ch11;
        system("cls");

        if(ch11==1)
        {
        string uname,pass;

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSTUDENT REGISTRATION \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;

        cout<<"\n\t\t\t\t\t\t\t\t\tPLEASE PROVIDE YOUR INFORMATION CAREFULLY "<<endl<<endl;

        cout<<"\t\t\t\t\t\t\t\t\tEnter User Name        :   ";
        cin>>uname;
        cout<<"\n\t\t\t\t\t\t\t\t\tYor Passwowrd          :   ";
        cin>>pass;

        ofstream Sdata("Slogin.txt",ios::out|ios::app);
        Sdata<<uname<<"\t\t\t"<<pass<<"\n";
        Sdata.close();


        cout<<"\n\n\t\t\t\t\t\t\t\t\tREGISTRATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  SignUp form  ";
        getch();
        system("cls");

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSTUDENT SIGNUP \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;

        cout<<"\n\t\t\t\t\t\t\t\t\tPLEASE PROVIDE YOUR INFORMATION CAREFULLY\n\t\t\t\t\t\t\t\t\tAND USE UNDERSCORE IN THE PLACE OF SPACE.\n";


    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your ID Number          :    ";
    cin>>studentData.sID;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your First Name         :    ";
    cin>>studentData.fname;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your  Last Name         :    ";
    cin>>studentData.lname;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Father`s   Name         :    ";
    cin.ignore();
    getline(cin,studentData.father_name);
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Mother`s   Name         :    ";
    getline(cin,studentData.mother_name);
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Religion                :    ";
    cin>>studentData.religion;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Blood group             :    ";
    cin>>studentData.blood;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter age                     :    ";
    cin>>studentData.age;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Admission Date          :    ";
    cin>>studentData.admission_date;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Admitted Class          :    ";
    cin>>studentData.admission_class;


    ofstream sdata;
    sdata.open("student.txt", ios::app);
    sdata<<studentData.sID<<endl;
    sdata<<studentData.fname<<endl;
    sdata<<studentData.lname<<endl;
    sdata<<studentData.father_name<<endl;
    sdata<<studentData.mother_name<<endl;
    sdata<<studentData.religion<<endl;
    sdata<<studentData.blood<<endl;
    sdata<<studentData.age<<endl;
    sdata<<studentData.admission_date<<endl;
    sdata<<studentData.admission_class<<endl;
    sdata<<endl<<endl<<endl;
    sdata.close();


        cout<<"\n\n\t\t\t\t\t\t\t\t\tUPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the login page  ";
        getch();
        system("cls");
        }









        else if(ch11==2)
        {
            string name,upass;


        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTEACHER REGISTRATION \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;

        cout<<"\n\t\t\t\t\t\t\t\t\tPLEASE PROVIDE YOUR INFORMATION CAREFULLY "<<endl<<endl;

        cout<<"\n\t\t\t\t\t\t\t\t\tEnter User Name        :   ";
        cin>>name;
        cout<<"\n\t\t\t\t\t\t\t\t\tEnter Yor Passwowrd    :   ";
        cin>>upass;

        ofstream data("Tlogin.txt",ios::out|ios::app);
        data<<name<<"\t\t\t"<<upass<<"\n";
        data.close();



        cout<<"\n\n\t\t\t\t\t\t\t\t\tREGISTRATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  SignUp form  ";
        getch();
        system("cls");


        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTEACHER SIGNUP \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;

        cout<<"\n\t\t\t\t\t\t\t\t\tPLEASE PROVIDE YOUR INFORMATION CAREFULLY "<<endl<<endl;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your ID Number              :    ";
    cin>>teacherData.tID;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your First Name             :    ";
    cin>>teacherData.fst_name;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your  Last Name             :    ";
    cin>>teacherData.lst_name;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter qualification               :    ";
    cin>>teacherData.qualification;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter experiance(year)            :    ";
    cin>>teacherData.exp;
    cout<<"\n\t\t\t\t\t\t\t\t\tNumber of years in this School    :    ";
    cin>>teacherData.serves;
    cout<<"\n\t\t\t\t\t\t\t\t\tWhich Subject's teach you are     :    ";
    cin>>teacherData.subj;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Lecture(per Week)           :    ";
    cin>>teacherData.lec;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter rank                        :    ";
    cin>>teacherData.rank;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Phone Number                :    ";
    cin>>teacherData.cel_no;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Blood Group                 :    ";
    cin>>teacherData.blod_grp;


    ofstream tdata;
    tdata.open("teacher.txt", ios::app);
    tdata<<teacherData.tID<<endl;
    tdata<<teacherData.fst_name<<endl;
    tdata<<teacherData.lst_name<<endl;
    tdata<<teacherData.qualification<<endl;
    tdata<<teacherData.exp<<endl;
    tdata<<teacherData.serves<<endl;
    tdata<<teacherData.subj<<endl;
    tdata<<teacherData.lec<<endl;
    tdata<<teacherData.rank<<endl;
    tdata<<teacherData.cel_no<<endl;
    tdata<<teacherData.blod_grp<<endl;
    tdata<<endl<<endl<<endl;
    tdata.close();

        cout<<"\n\n\t\t\t\t\t\t\t\t\tUPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the login page  ";
        getch();
        system("cls");








        }
        else
        {
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID OPTION CHOICE \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPlease try again  ";
        getch();
        system("cls");
        }
}
    goto loop;
    break;








 case 2:
     {

       int Slog=0,Tlog=0;
        string userName,Name,userPassword,Pass;

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tLOGIN  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;

        cout<<"\n\t\t\t\t\t\t\t\t\tPLEASE PROVIDE YOUR INFORMATION CAREFULLY "<<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\tEnter User Name          :   ";
        cin>>userName;
        cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your Password      :   ";
        cin>>userPassword;

        ifstream Smatch("Slogin.txt");
        while(Smatch>>Name>>Pass)
        {
              if(Name==userName && Pass==userPassword)
              {
                Slog=1;
              }
        }
        Smatch.close();
        ifstream Tmatch("Tlogin.txt");
        while(Tmatch>>Name>>Pass)
        {
              if(Name==userName && Pass==userPassword)
              {
                Tlog=1;
              }
        }
        Tmatch.close();

        if (Slog==1)
        {

        cout<<"\n\n\t\t\t\t\t\t\t\t\tTHANKS FOR LOGIN \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Next page  ";
        getch();
        system("cls");
        int ch2;
        loop1:
        do
        {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSTUDENT INFORMATION  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\tChoose your option   :  "<<endl<<endl;
        cout<< "\n\t\t\t\t\t\t\t\t\t1.View Account               ";
        cout<< "\n\t\t\t\t\t\t\t\t\t2.See Teacher's Class shedule  ";
        cout<< "\n\t\t\t\t\t\t\t\t\t3.See Result                ";
        cout<< "\n\t\t\t\t\t\t\t\t\t0.Back To Main Menu          ";
        cout<< "\n\n\t\t\t\t\t\t\t\t\tSelect Your option     :     ";
        cin>>ch2;

        system("cls");
     switch(ch2)
        {
        case 1 :
            {
         int n;

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSTUDENT DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\t\t\t\t\t\t\t\t\tEnter your id number    :      ";
         cin>>n;
    ifstream s11data;
    s11data.open("student.txt");
    s11data>>studentData.sID;
    s11data>>studentData.fname;
    s11data>>studentData.lname;
    s11data>>studentData.father_name;
    s11data>>studentData.mother_name;
    s11data>>studentData.religion;
    s11data>>studentData.blood;
    s11data>>studentData.age;
    s11data>>studentData.admission_date;
    s11data>>studentData.admission_class;
       while(!s11data.eof())
       {
        if(studentData.sID==n)
        {
        cout<<"\n\t\t\t\t\t\t\t\t\tID Number is         "<<studentData.sID;
        cout<<"\n\t\t\t\t\t\t\t\t\tName                 "<<studentData.fname<<" "<<studentData.lname;
        cout<<"\n\t\t\t\t\t\t\t\t\tFather`s name is     "<<studentData.father_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tMother`s name is     "<<studentData.mother_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tReligion is          "<<studentData.religion;
        cout<<"\n\t\t\t\t\t\t\t\t\tBlood group is       "<<studentData.blood;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour age is          "<<studentData.age;
        cout<<"\n\t\t\t\t\t\t\t\t\tAdmission Date       "<<studentData.admission_date;
        cout<<"\n\t\t\t\t\t\t\t\t\tAdmitted  class      "<<studentData.admission_class;
        cout<<endl<<endl<<endl;
        }




    s11data>>studentData.sID;
    s11data>>studentData.fname;
    s11data>>studentData.lname;
    s11data>>studentData.father_name;
    s11data>>studentData.mother_name;
    s11data>>studentData.religion;
    s11data>>studentData.blood;
    s11data>>studentData.age;
    s11data>>studentData.admission_date;
    s11data>>studentData.admission_class;


       }
       s11data.close();
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait..............";
        system("cls");
        goto loop1;
        break;

            }


        case 2 :
            {

    ifstream tech1data;
    int tec;
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTEACHING HOURS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\tEnter tech id : ";
        cin>>tec;
    tech1data.open("teachingHour.txt");
    tech1data>>techHour.teching_id;
    tech1data>>techHour.scls6;
    tech1data>>techHour.scls7;
    tech1data>>techHour.scls8;
    tech1data>>techHour.scls9;
    tech1data>>techHour.scls10;
    tech1data>>techHour.mcls6;
    tech1data>>techHour.mcls7;
    tech1data>>techHour.mcls8;
    tech1data>>techHour.mcls9;
    tech1data>>techHour.mcls10;
       while(!tech1data.eof())
       {
            if(techHour.teching_id==tec)
            {

        cout<<"\n\n\t\t\t\t\t\t\t\t\tTeaching hours for class 6   :";
        cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue Thu   :  "<<techHour.scls6;
        cout<<"\n\t\t\t\t\t\t\t\t\t  Mon Wed     :  "<<techHour.mcls6;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTeaching hours for class 7   :";
        cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue Thu   :  "<<techHour.scls7;
        cout<<"\n\t\t\t\t\t\t\t\t\t  Mon Wed     :  "<<techHour.mcls7;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTeaching hours for class 8   :";
        cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue Thu   :  "<<techHour.scls8;
        cout<<"\n\t\t\t\t\t\t\t\t\t  Mon Wed     :  "<<techHour.mcls8;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTeaching hours for class 9   :";
        cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue Thu   :  "<<techHour.scls9;
        cout<<"\n\t\t\t\t\t\t\t\t\t  Mon Wed     :  "<<techHour.mcls9;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTeaching hours for class 10   :";
        cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue Thu   :  "<<techHour.scls10;
        cout<<"\n\t\t\t\t\t\t\t\t\t  Mon Wed     :  "<<techHour.mcls10;
        cout<<endl<<endl<<endl;
            }

    tech1data>>techHour.teching_id;
    tech1data>>techHour.scls6;
    tech1data>>techHour.scls7;
    tech1data>>techHour.scls8;
    tech1data>>techHour.scls9;
    tech1data>>techHour.scls10;
    tech1data>>techHour.mcls6;
    tech1data>>techHour.mcls7;
    tech1data>>techHour.mcls8;
    tech1data>>techHour.mcls9;
    tech1data>>techHour.mcls10;
       }
       tech1data.close();

        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
                getch();
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait..............";
                system("cls");
               break;
            }
        case 3 :
            {
         int n;

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSTUDENT RESULT  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\t\t\t\t\t\t\t\t\tEnter your id number    :      ";
         cin>>n;

         ifstream res12data;
         res12data.open("result.txt");
    res12data>>res.st_id;
    res12data>>res.ban;
    res12data>>res.eng;
    res12data>>res.math;
    res12data>>res.social;
    res12data>>res.science;
    res12data>>res.islam;
       while(!res12data.eof())
       {
        if(res.st_id==n)
        {
        cout<<"\n\t\t\t\t\t\t\t\t\tID Number is                           "<<res.st_id;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour Number in Banga                   "<<res.ban;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour Number in English                 "<<res.eng;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour Number in Math                    "<<res.math;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour Number in Social Science          "<<res.social;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour Number in Science                 "<<res.science;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour Number in Islamic Studies         "<<res.islam;
        cout<<endl<<endl<<endl;
        }


    res12data>>res.st_id;
    res12data>>res.ban;
    res12data>>res.eng;
    res12data>>res.math;
    res12data>>res.social;
    res12data>>res.science;
    res12data>>res.islam;

       }
       res12data.close();
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait..............";
        system("cls");
        goto loop1;
        break;
            }
        case 0:
            {
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait..............";
                break;
            }
        default :
            {

        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID OPTION CHOICE \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPlease try again  ";

            }

        }

        }while(ch2!=0);
        system("cls");
        }
        else if(Tlog==1)
        {
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTHANKS FOR LOGIN \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Next page  ";
        getch();
        system("cls");

        int ch4;
        do
        {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTEACHER INFORMATION  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\tChoose your option   :  "<<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\t1.View Account               ";
        cout<<"\n\t\t\t\t\t\t\t\t\t2.Set Teaching Hours         ";
        cout<<"\n\t\t\t\t\t\t\t\t\t3.Modify Teaching Hours         ";
        cout<<"\n\t\t\t\t\t\t\t\t\t4.See Class wise  Student        ";
        cout<<"\n\t\t\t\t\t\t\t\t\t0.Back To Main Menu          ";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSelect Your option     :      ";
        cin>>ch4;
        system("cls");
     switch(ch4)
        {
        case 1 :
            {

         int j;
         cout<< "\n\t\t\t\t\t\t\t\t\tEnter your id number ";
         cin>>j;
    ifstream t11data;
    t11data.open("teacher.txt");

    t11data>>teacherData.tID;
    t11data>>teacherData.fst_name;
    t11data>>teacherData.lst_name;
    t11data>>teacherData.qualification;
    t11data>>teacherData.exp;
    t11data>>teacherData.serves;
    t11data>>teacherData.subj;
    t11data>>teacherData.lec;
    t11data>>teacherData.rank;
    t11data>>teacherData.cel_no;
    t11data>>teacherData.blod_grp;
       while(!t11data.eof())
       {
        if(teacherData.tID==j)
        {
        cout<<"\n\n\t\t\t\t\t\t\t\t\tID Number is         "<<teacherData.tID;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tName                 "<<teacherData.fst_name<<" "<<teacherData.lst_name;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tQualification        "<<teacherData.qualification;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tExperience           "<<teacherData.exp;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tServices             "<<teacherData.serves;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSubject              "<<teacherData.subj;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tLecture              "<<teacherData.lec;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tRank                 "<<teacherData.rank;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tCellphone            "<<teacherData.cel_no;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tBlood Group          "<<teacherData.blod_grp;
        cout<<endl<<endl<<endl;
        }



    t11data>>teacherData.tID;
    t11data>>teacherData.fst_name;
    t11data>>teacherData.lst_name;
    t11data>>teacherData.qualification;
    t11data>>teacherData.exp;
    t11data>>teacherData.serves;
    t11data>>teacherData.subj;
    t11data>>teacherData.lec;
    t11data>>teacherData.rank;
    t11data>>teacherData.cel_no;
    t11data>>teacherData.blod_grp;
       }
       t11data.close();

        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();

        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
        system("cls");

            break;
            }
        case 2 :
            {
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTEACHER TEACHING SCHEDULE \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;


    cout<<"\n\t\t\t\t\t\t\t\t\tEnter A Teaching ID for your Student   :     ";
    cin>>techHour.teching_id;
    cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 6        ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\tSun Tue and Thu     :    ";
    cin>>techHour.scls6;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         :    ";
    cin>>techHour.mcls6;
    cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 7        ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\tSun Tue and Thu     :    ";
    cin>>techHour.scls7;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         :    ";
    cin>>techHour.mcls7;
    cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 8        ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\tSun Tue and Thu     :    ";
    cin>>techHour.scls8;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         :    ";
    cin>>techHour.mcls8;
    cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 9        ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\tSun Tue and Thu     :    ";
    cin>>techHour.scls9;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         :    ";
    cin>>techHour.mcls9;
    cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 10       ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\tSun Tue and Thu     :    ";
    cin>>techHour.scls10;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         :    ";
    cin>>techHour.mcls10;


    ofstream techdata;
    techdata.open("teachingHour.txt", ios::app);
    techdata<<techHour.teching_id<<endl;
    techdata<<techHour.scls6<<endl;
    techdata<<techHour.scls7<<endl;
    techdata<<techHour.scls8<<endl;
    techdata<<techHour.scls9<<endl;
    techdata<<techHour.scls10<<endl;
    techdata<<techHour.mcls6<<endl;
    techdata<<techHour.mcls7<<endl;
    techdata<<techHour.mcls8<<endl;
    techdata<<techHour.mcls9<<endl;
    techdata<<techHour.mcls10<<endl;
    techdata<<endl<<endl<<endl;
    techdata.close();


        cout<<"\n\n\t\t\t\t\t\t\t\t\tUPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  previous page  ";
        getch();
        system("cls");
        break;
            }

        case 3 :
            {
                 int te;
         cout<< "\n\t\t\t\t\t\t\t\t\tEnter your teching id number ";
         cin>>te;
         ifstream tech2data;
         tech2data.open("teachingHour.txt");
         ofstream teaching;
         teaching.open("teaching.txt");

    tech2data>>techHour.teching_id;
    tech2data>>techHour.scls6;
    tech2data>>techHour.scls7;
    tech2data>>techHour.scls8;
    tech2data>>techHour.scls9;
    tech2data>>techHour.scls10;
    tech2data>>techHour.mcls6;
    tech2data>>techHour.mcls7;
    tech2data>>techHour.mcls8;
    tech2data>>techHour.mcls9;
    tech2data>>techHour.mcls10;

         while(!tech2data.eof())
         {
             if(techHour.teching_id!= te)
             {

    teaching<<techHour.teching_id<<endl;
    teaching<<techHour.scls6<<endl;
    teaching<<techHour.scls7<<endl;
    teaching<<techHour.scls8<<endl;
    teaching<<techHour.scls9<<endl;
    teaching<<techHour.scls10<<endl;
    teaching<<techHour.mcls6<<endl;
    teaching<<techHour.mcls7<<endl;
    teaching<<techHour.mcls8<<endl;
    teaching<<techHour.mcls9<<endl;
    teaching<<techHour.mcls10<<endl;
    teaching<<endl<<endl<<endl;
             }
             else
             {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\MODIFY TEACHING SCHEDULE \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;


    cout<<"\n\t\t\t\t\t\t\t\t\tEnter A NEW Teaching ID for your Student ";
    cin>>techHour.teching_id;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 6        ";
    cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue and Thu         ";
    cin>>techHour.scls6;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         ";
    cin>>techHour.mcls6;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 7        ";
    cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue and Thu         ";
    cin>>techHour.scls7;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         ";
    cin>>techHour.mcls7;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 8        ";
    cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue and Thu         ";
    cin>>techHour.scls8;
    cout<<"\n\t\t\t\t\t\t\t\t\ttMon and Wed         ";
    cin>>techHour.mcls8;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 9        ";
    cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue and Thu         ";
    cin>>techHour.scls9;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         ";
    cin>>techHour.mcls9;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Teaching schedule for class 10       ";
    cout<<"\n\t\t\t\t\t\t\t\t\tSun Tue and Thu         ";
    cin>>techHour.scls10;
    cout<<"\n\t\t\t\t\t\t\t\t\tMon and Wed         ";
    cin>>techHour.mcls10;



    teaching<<techHour.teching_id<<endl;
    teaching<<techHour.scls6<<endl;
    teaching<<techHour.scls7<<endl;
    teaching<<techHour.scls8<<endl;
    teaching<<techHour.scls9<<endl;
    teaching<<techHour.scls10<<endl;
    teaching<<techHour.mcls6<<endl;
    teaching<<techHour.mcls7<<endl;
    teaching<<techHour.mcls8<<endl;
    teaching<<techHour.mcls9<<endl;
    teaching<<techHour.mcls10<<endl;
    teaching<<endl<<endl<<endl;


             }


    tech2data>>techHour.teching_id;
    tech2data>>techHour.scls6;
    tech2data>>techHour.scls7;
    tech2data>>techHour.scls8;
    tech2data>>techHour.scls9;
    tech2data>>techHour.scls10;
    tech2data>>techHour.mcls6;
    tech2data>>techHour.mcls7;
    tech2data>>techHour.mcls8;
    tech2data>>techHour.mcls9;
    tech2data>>techHour.mcls10;


          }


         teaching.close();
         tech2data.close();
         remove("teachingHour.txt");
         rename("teaching.txt", "teachingHour.txt");


        cout<<"\n\n\t\t\t\t\t\t\t\t\tUPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the previous page  ";
        getch();
        system("cls");
                getch();
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
                system("cls");
                break;
            }

        case 4 :
            {
                int clsn;

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tCLASS WISE DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\t\t\t\t\t\t\t\t\twhich class details you want to see    :      ";
         cin>>clsn;
    ifstream s12data;
    s12data.open("student.txt");
    s12data>>studentData.sID;
    s12data>>studentData.fname;
    s12data>>studentData.lname;
    s12data>>studentData.father_name;
    s12data>>studentData.mother_name;
    s12data>>studentData.religion;
    s12data>>studentData.blood;
    s12data>>studentData.age;
    s12data>>studentData.admission_date;
    s12data>>studentData.admission_class;
       while(!s12data.eof())
       {
        if(studentData.admission_class==clsn)
        {
        cout<<"\n\t\t\t\t\t\t\t\t\tID Number is         "<<studentData.sID;
        cout<<"\n\t\t\t\t\t\t\t\t\tName                 "<<studentData.fname<<" "<<studentData.lname;
        cout<<"\n\t\t\t\t\t\t\t\t\tFather`s name is     "<<studentData.father_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tMother`s name is     "<<studentData.mother_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tReligion is          "<<studentData.religion;
        cout<<"\n\t\t\t\t\t\t\t\t\tBlood group is       "<<studentData.blood;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour age is          "<<studentData.age;
        cout<<"\n\t\t\t\t\t\t\t\t\tAdmission Date       "<<studentData.admission_date;
        cout<<"\n\t\t\t\t\t\t\t\t\tAdmitted  class      "<<studentData.admission_class;
        cout<<endl<<endl<<endl;
        }


    s12data>>studentData.sID;
    s12data>>studentData.fname;
    s12data>>studentData.lname;
    s12data>>studentData.father_name;
    s12data>>studentData.mother_name;
    s12data>>studentData.religion;
    s12data>>studentData.blood;
    s12data>>studentData.age;
    s12data>>studentData.admission_date;
    s12data>>studentData.admission_class;
       }
       s12data.close();

        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait..............";
        system("cls");

        break;
            }
        case 0:
            {
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
                break;
            }
        default :
            {

        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tINVALID OPTION CHOICE \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPlease try again  ";

            }

        }

        }while(ch4!=0);
        system("cls");
        }
        else if(userName=="admin" && userPassword=="admin")
        {
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTHANKS FOR LOGIN \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Next page  ";
        getch();
        system("cls");

        int ch3;
        do
        {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSCHOOL INFORMATION  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t\tChoose your option   :  "<<endl<<endl;
        cout<< "\n\t\t\t\t\t\t\t\t\t1.View All Student Details               ";
        cout<< "\n\t\t\t\t\t\t\t\t\t2.View All Teachers Details  ";
        cout<< "\n\t\t\t\t\t\t\t\t\t3.Modify Student's Details                ";
        cout<< "\n\t\t\t\t\t\t\t\t\t4.Delete Student's Details                ";
        cout<< "\n\t\t\t\t\t\t\t\t\t5.Modify Teacher's Details                ";
        cout<< "\n\t\t\t\t\t\t\t\t\t6.Delete Teacher's Details                ";
        cout<< "\n\t\t\t\t\t\t\t\t\t7.Classwise students                ";
        cout<< "\n\t\t\t\t\t\t\t\t\t8.Set Student Result                ";
        cout<< "\n\t\t\t\t\t\t\t\t\t9.Modify Students Result                ";
        cout<< "\n\t\t\t\t\t\t\t\t\t0.Back To Main Menu          ";
        cout<< "\n\n\t\t\t\t\t\t\t\t\tSelect option     :        ";
        cin>>ch3;
        system("cls");

        switch(ch3)
        {
        case 1 :
            {

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTOTAL STUDENT'S DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;

    ifstream s1data;
    s1data.open("student.txt");
    s1data>>studentData.sID;
    s1data>>studentData.fname;
    s1data>>studentData.lname;
    s1data>>studentData.father_name;
    s1data>>studentData.mother_name;
    s1data>>studentData.religion;
    s1data>>studentData.blood;
    s1data>>studentData.age;
    s1data>>studentData.admission_date;
    s1data>>studentData.admission_class;
       while(!s1data.eof())
       {

        cout<<"\n\t\t\t\t\t\t\t\t\tID Number is         "<<studentData.sID;
        cout<<"\n\t\t\t\t\t\t\t\t\tName                 "<<studentData.fname<<" "<<studentData.lname;
        cout<<"\n\t\t\t\t\t\t\t\t\tFather`s name is     "<<studentData.father_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tMother`s name is     "<<studentData.mother_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tReligion is          "<<studentData.religion;
        cout<<"\n\t\t\t\t\t\t\t\t\tBlood group is       "<<studentData.blood;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour age is          "<<studentData.age;
        cout<<"\n\t\t\t\t\t\t\t\t\tAdmission Date       "<<studentData.admission_date;
        cout<<"\n\t\t\t\t\t\t\t\t\tAdmitted  class      "<<studentData.admission_class;
        cout<<endl<<endl<<endl;


    s1data>>studentData.sID;
    s1data>>studentData.fname;
    s1data>>studentData.lname;
    s1data>>studentData.father_name;
    s1data>>studentData.mother_name;
    s1data>>studentData.religion;
    s1data>>studentData.blood;
    s1data>>studentData.age;
    s1data>>studentData.admission_date;
    s1data>>studentData.admission_class;
       }
       s1data.close();

        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();

        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
        system("cls");
                break;
            }

        case 2 :
             {

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tTOTAL TEACHER'S DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
    ifstream t1data;
    t1data.open("teacher.txt");
    t1data>>teacherData.tID;
    t1data>>teacherData.fst_name;
    t1data>>teacherData.lst_name;
    t1data>>teacherData.qualification;
    t1data>>teacherData.exp;
    t1data>>teacherData.serves;
    t1data>>teacherData.subj;
    t1data>>teacherData.lec;
    t1data>>teacherData.rank;
    t1data>>teacherData.cel_no;
    t1data>>teacherData.blod_grp;
       while(!t1data.eof())
       {

        cout<<"\n\t\t\t\t\t\t\t\t\tID Number is         "<<teacherData.tID;
        cout<<"\n\t\t\t\t\t\t\t\t\tName                 "<<teacherData.fst_name<<" "<<teacherData.lst_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tQualification        "<<teacherData.qualification;
        cout<<"\n\t\t\t\t\t\t\t\t\tExperience           "<<teacherData.exp;
        cout<<"\n\t\t\t\t\t\t\t\t\tServices  from       "<<teacherData.serves;
        cout<<"\n\t\t\t\t\t\t\t\t\tSubject              "<<teacherData.subj;
        cout<<"\n\t\t\t\t\t\t\t\t\tLecture              "<<teacherData.lec;
        cout<<"\n\t\t\t\t\t\t\t\t\tRank                 "<<teacherData.rank;
        cout<<"\n\t\t\t\t\t\t\t\t\tCellphone            "<<teacherData.cel_no;
        cout<<"\n\t\t\t\t\t\t\t\t\tBlood Group           "<<teacherData.blod_grp;
        cout<<endl<<endl<<endl;


    t1data>>teacherData.tID;
    t1data>>teacherData.fst_name;
    t1data>>teacherData.lst_name;
    t1data>>teacherData.qualification;
    t1data>>teacherData.exp;
    t1data>>teacherData.serves;
    t1data>>teacherData.subj;
    t1data>>teacherData.lec;
    t1data>>teacherData.rank;
    t1data>>teacherData.cel_no;
    t1data>>teacherData.blod_grp;
       }
       t1data.close();

        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();

        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
        system("cls");
                break;
            }
        case 3 :
            {

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tMODIFY STUDENT'S DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
         int m;
         cout<< "\n\t\t\t\t\t\t\t\t\tEnter your id number  :   ";
         cin>>m;
         ifstream s2data;
         s2data.open("student.txt");
         ofstream del;
         del.open("new.txt");


    s2data>>studentData.sID;
    s2data>>studentData.fname;
    s2data>>studentData.lname;
    s2data>>studentData.father_name;
    s2data>>studentData.mother_name;
    s2data>>studentData.religion;
    s2data>>studentData.blood;
    s2data>>studentData.age;
    s2data>>studentData.admission_date;
    s2data>>studentData.admission_class;

         while(!s2data.eof())
         {
             if(studentData.sID != m)
             {

    del<<studentData.sID<<endl;
    del<<studentData.fname<<endl;
    del<<studentData.lname<<endl;
    del<<studentData.father_name<<endl;
    del<<studentData.mother_name<<endl;
    del<<studentData.religion<<endl;
    del<<studentData.blood<<endl;
    del<<studentData.age<<endl;
    del<<studentData.admission_date<<endl;
    del<<studentData.admission_class<<endl;
    del<<endl<<endl<<endl;

             }
             else
             {
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter New ID Number          :    ";
    cin>>studentData.sID;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your First Name         :    ";
    cin>>studentData.fname;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your  Last Name         :    ";
    cin>>studentData.lname;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Father`s   Name         :    ";
    cin.ignore();
    getline(cin,studentData.father_name);
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Mother`s   Name         :    ";
    getline(cin,studentData.mother_name);
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Religion                :    ";
    cin>>studentData.religion;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Blood group             :    ";
    cin>>studentData.blood;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter age                     :    ";
    cin>>studentData.age;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Admission Date          :    ";
    cin>>studentData.admission_date;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Admitted Class          :    ";
    cin>>studentData.admission_class;


    del<<studentData.sID<<endl;
    del<<studentData.fname<<endl;
    del<<studentData.lname<<endl;
    del<<studentData.father_name<<endl;
    del<<studentData.mother_name<<endl;
    del<<studentData.religion<<endl;
    del<<studentData.blood<<endl;
    del<<studentData.age<<endl;
    del<<studentData.admission_date<<endl;
    del<<studentData.admission_class<<endl;
    del<<endl<<endl<<endl;

             }

    s2data>>studentData.sID;
    s2data>>studentData.fname;
    s2data>>studentData.lname;
    s2data>>studentData.father_name;
    s2data>>studentData.mother_name;
    s2data>>studentData.religion;
    s2data>>studentData.blood;
    s2data>>studentData.age;
    s2data>>studentData.admission_date;
    s2data>>studentData.admission_class;
         }
         del.close();
         s2data.close();
         remove("student.txt");
         rename("new.txt", "student.txt");


        cout<<"\n\n\t\t\t\t\t\t\t\t\t   UPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the previous page  ";
        getch();

        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
        system("cls");
                break;
            }
        case 4 :
            {

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tDELETE STUDENT DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
         int mat;
         cout<< "\n\t\t\t\t\t\t\t\t\tEnter ID Number to find details  :   ";
         cin>>mat;
         ifstream s2data;
         s2data.open("student.txt");
         ofstream del;
         del.open("new.txt");


    s2data>>studentData.sID;
    s2data>>studentData.fname;
    s2data>>studentData.lname;
    s2data>>studentData.father_name;
    s2data>>studentData.mother_name;
    s2data>>studentData.religion;
    s2data>>studentData.blood;
    s2data>>studentData.age;
    s2data>>studentData.admission_date;
    s2data>>studentData.admission_class;

         while(!s2data.eof())
         {
             if(studentData.sID != mat)
             {

    del<<studentData.sID<<endl;
    del<<studentData.fname<<endl;
    del<<studentData.lname<<endl;
    del<<studentData.father_name<<endl;
    del<<studentData.mother_name<<endl;
    del<<studentData.religion<<endl;
    del<<studentData.blood<<endl;
    del<<studentData.age<<endl;
    del<<studentData.admission_date<<endl;
    del<<studentData.admission_class<<endl;
    del<<endl<<endl<<endl;

             }
             else
             {
                 cout<< "\n\n\n\n\n\n\t\t\t\t\tRecord deleted";
             }

    s2data>>studentData.sID;
    s2data>>studentData.fname;
    s2data>>studentData.lname;
    s2data>>studentData.father_name;
    s2data>>studentData.mother_name;
    s2data>>studentData.religion;
    s2data>>studentData.blood;
    s2data>>studentData.age;
    s2data>>studentData.admission_date;
    s2data>>studentData.admission_class;
         }
         del.close();
         s2data.close();
         remove("student.txt");
         rename("new.txt", "student.txt");

        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();

        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
        system("cls");
                break;
            }
        case 5 :
            {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tMODIFY TEACHER'S DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
         int n;
         cout<< "\n\t\t\t\t\t\t\t\t\tEnter your id number ";
         cin>>n;
         ifstream t2data;
         t2data.open("teacher.txt");
         ofstream tdel;
         tdel.open("tnew.txt");

    t2data>>teacherData.tID;
    t2data>>teacherData.fst_name;
    t2data>>teacherData.lst_name;
    t2data>>teacherData.qualification;
    t2data>>teacherData.exp;
    t2data>>teacherData.serves;
    t2data>>teacherData.subj;
    t2data>>teacherData.lec;
    t2data>>teacherData.rank;
    t2data>>teacherData.cel_no;
    t2data>>teacherData.blod_grp;

         while(!t2data.eof())
         {
             if(teacherData.tID != n)
             {

    tdel<<teacherData.tID<<endl;
    tdel<<teacherData.fst_name<<endl;
    tdel<<teacherData.lst_name<<endl;
    tdel<<teacherData.qualification<<endl;
    tdel<<teacherData.exp<<endl;
    tdel<<teacherData.serves<<endl;
    tdel<<teacherData.subj<<endl;
    tdel<<teacherData.lec<<endl;
    tdel<<teacherData.rank<<endl;
    tdel<<teacherData.cel_no<<endl;
    tdel<<teacherData.blod_grp<<endl;
    tdel<<endl<<endl<<endl;

             }
             else
             {
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your ID Number          :    ";
    cin>>teacherData.tID;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your First Name         :    ";
    cin>>teacherData.fst_name;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Your  Last Name         :    ";
    cin>>teacherData.lst_name;
  cout<<"\n\t\t\t\t\t\t\t\t\tEnter qualification: ";
  cin>>teacherData.qualification;
  cout<<"\n\t\t\t\t\t\t\t\t\tEnter experiance(year): ";
  cin>>teacherData.exp;
  cout<<"\n\t\t\t\t\t\t\t\t\tEnter number of year in this School: ";
  cin>>teacherData.serves;
  cout<<"\n\t\t\t\t\t\t\t\t\tEnter Subject whos teach: ";
  cin>>teacherData.subj;
  cout<<"\n\t\t\t\t\t\t\t\t\tEnter Lecture(per Week): ";
  cin>>teacherData.lec;
  cout<<"\n\t\t\t\t\t\t\t\t\tEnter rank: ";
  cin>>teacherData.rank;
  cout<<"\n\t\t\t\t\t\t\t\t\tEnter Phone Number: ";
  cin>>teacherData.cel_no;
  cout<<"\n\t\t\t\t\t\t\t\t\tEnter Blood Group: ";
  cin>>teacherData.blod_grp;



    tdel<<teacherData.tID<<endl;
    tdel<<teacherData.fst_name<<endl;
    tdel<<teacherData.lst_name<<endl;
    tdel<<teacherData.qualification<<endl;
    tdel<<teacherData.exp<<endl;
    tdel<<teacherData.serves<<endl;
    tdel<<teacherData.subj<<endl;
    tdel<<teacherData.lec<<endl;
    tdel<<teacherData.rank<<endl;
    tdel<<teacherData.cel_no<<endl;
    tdel<<teacherData.blod_grp<<endl;
    tdel<<endl<<endl<<endl;



             }

    t2data>>teacherData.tID;
    t2data>>teacherData.fst_name;
    t2data>>teacherData.lst_name;
    t2data>>teacherData.qualification;
    t2data>>teacherData.exp;
    t2data>>teacherData.serves;
    t2data>>teacherData.subj;
    t2data>>teacherData.lec;
    t2data>>teacherData.rank;
    t2data>>teacherData.cel_no;
    t2data>>teacherData.blod_grp;
         }
         tdel.close();
         t2data.close();
         remove("teacher.txt");
         rename("tnew.txt", "teacher.txt");

        cout<<"\n\n\t\t\t\t\t\t\t\t\t   UPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the previous page  ";
        getch();
        system("cls");
                break;

            }
        case 6 :
            {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tDELETE TEACHER'S DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
         int mat1;
         cout<< "\n\t\t\t\t\t\t\t\t\tEnter your id number ";
         cin>>mat1;
         ifstream t2data;
         t2data.open("teacher.txt");
         ofstream tdel;
         tdel.open("tnew.txt");


    t2data>>teacherData.tID;
    t2data>>teacherData.fst_name;
    t2data>>teacherData.lst_name;
    t2data>>teacherData.qualification;
    t2data>>teacherData.exp;
    t2data>>teacherData.serves;
    t2data>>teacherData.subj;
    t2data>>teacherData.lec;
    t2data>>teacherData.rank;
    t2data>>teacherData.cel_no;
    t2data>>teacherData.blod_grp;

         while(!t2data.eof())
         {
             if(teacherData.tID != mat1)
             {
    tdel<<teacherData.tID<<endl;
    tdel<<teacherData.fst_name<<endl;
    tdel<<teacherData.lst_name<<endl;
    tdel<<teacherData.qualification<<endl;
    tdel<<teacherData.exp<<endl;
    tdel<<teacherData.serves<<endl;
    tdel<<teacherData.subj<<endl;
    tdel<<teacherData.lec<<endl;
    tdel<<teacherData.rank<<endl;
    tdel<<teacherData.cel_no<<endl;
    tdel<<teacherData.blod_grp<<endl;
    tdel<<endl<<endl<<endl;

             }
             else
             {
                 cout<< "\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tRecord deleted";
             }

    t2data>>teacherData.tID;
    t2data>>teacherData.fst_name;
    t2data>>teacherData.lst_name;
    t2data>>teacherData.qualification;
    t2data>>teacherData.exp;
    t2data>>teacherData.serves;
    t2data>>teacherData.subj;
    t2data>>teacherData.lec;
    t2data>>teacherData.rank;
    t2data>>teacherData.cel_no;
    t2data>>teacherData.blod_grp;
         }
         tdel.close();
         t2data.close();
         remove("teacher.txt");
         rename("tnew.txt", "teacher.txt");

        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();

        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
        system("cls");
                break;

            }
        case 7 :
            {

                int clsn1;

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tCLASS WISE DETAILS  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\t\t\t\t\t\t\t\t\twhich class details you want to see    :      ";
         cin>>clsn1;
    ifstream s12data;
    s12data.open("student.txt");
    s12data>>studentData.sID;
    s12data>>studentData.fname;
    s12data>>studentData.lname;
    s12data>>studentData.father_name;
    s12data>>studentData.mother_name;
    s12data>>studentData.religion;
    s12data>>studentData.blood;
    s12data>>studentData.age;
    s12data>>studentData.admission_date;
    s12data>>studentData.admission_class;
       while(!s12data.eof())
       {
        if(studentData.admission_class==clsn1)
        {
        cout<<"\n\t\t\t\t\t\t\t\t\tID Number is         "<<studentData.sID;
        cout<<"\n\t\t\t\t\t\t\t\t\tName                 "<<studentData.fname<<" "<<studentData.lname;
        cout<<"\n\t\t\t\t\t\t\t\t\tFather`s name is     "<<studentData.father_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tMother`s name is     "<<studentData.mother_name;
        cout<<"\n\t\t\t\t\t\t\t\t\tReligion is          "<<studentData.religion;
        cout<<"\n\t\t\t\t\t\t\t\t\tBlood group is       "<<studentData.blood;
        cout<<"\n\t\t\t\t\t\t\t\t\tYour age is          "<<studentData.age;
        cout<<"\n\t\t\t\t\t\t\t\t\tAdmission Date       "<<studentData.admission_date;
        cout<<"\n\t\t\t\t\t\t\t\t\tAdmitted  class      "<<studentData.admission_class;
        cout<<endl<<endl<<endl;
        }


    s12data>>studentData.sID;
    s12data>>studentData.fname;
    s12data>>studentData.lname;
    s12data>>studentData.father_name;
    s12data>>studentData.mother_name;
    s12data>>studentData.religion;
    s12data>>studentData.blood;
    s12data>>studentData.age;
    s12data>>studentData.admission_date;
    s12data>>studentData.admission_class;
       }
       s12data.close();

        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the Previous page  ";
        getch();
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait..............";
        system("cls");

        break;
            }



        case 8:

            {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tSET STUDENT RESULT  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;

    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Student ID                    :    ";
    cin>>res.st_id;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Bangla             :    ";
    cin>>res.ban;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for English            :    ";
    cin>>res.eng;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Math               :    ";
    cin>>res.math;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Social Science     :    ";
    cin>>res.social;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Science            :    ";
    cin>>res.science;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Islamic Studies    :    ";
    cin>>res.islam;

    ofstream studentRes;
    studentRes.open("result.txt", ios::app);
    studentRes<<res.st_id<<endl;
    studentRes<<res.ban<<endl;
    studentRes<<res.eng<<endl;
    studentRes<<res.math<<endl;
    studentRes<<res.social<<endl;
    studentRes<<res.science<<endl;
    studentRes<<res.islam<<endl;
    studentRes<<endl<<endl<<endl;
    studentRes.close();

        cout<<"\n\n\t\t\t\t\t\t\t\t\t   UPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the previous page  ";
        getch();
        system("cls");
                break;

            }

        case 9:
            {

        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tMODIFY STUDENT RESULT  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
         int mod;
         cout<< "\n\t\t\t\t\t\t\t\t\tEnter student's id number    :    ";
         cin>>mod;
         ifstream res1data;
         res1data.open("result.txt");
         ofstream res2;
         res2.open("newResult.txt");

    res1data>>res.st_id;
    res1data>>res.ban;
    res1data>>res.eng;
    res1data>>res.math;
    res1data>>res.social;
    res1data>>res.science;
    res1data>>res.islam;

         while(!res1data.eof())
         {
             if(res.st_id!= mod)
             {

    res2<<res.st_id<<endl;
    res2<<res.ban<<endl;
    res2<<res.eng<<endl;
    res2<<res.math<<endl;
    res2<<res.social<<endl;
    res2<<res.science<<endl;
    res2<<res.islam<<endl;
    res2<<endl<<endl<<endl;
             }
             else
             {

    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Student ID                    :    ";
    cin>>res.st_id;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Bangla             :    ";
    cin>>res.ban;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for English            :    ";
    cin>>res.eng;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Math               :    ";
    cin>>res.math;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Social Science     :    ";
    cin>>res.social;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Science            :    ";
    cin>>res.science;
    cout<<"\n\t\t\t\t\t\t\t\t\tEnter Number for Islamic Studies    :    ";
    cin>>res.islam;

    res2<<res.st_id<<endl;
    res2<<res.ban<<endl;
    res2<<res.eng<<endl;
    res2<<res.math<<endl;
    res2<<res.social<<endl;
    res2<<res.science<<endl;
    res2<<res.islam<<endl;
    res2<<endl<<endl<<endl;


             }


    res1data>>res.st_id;
    res1data>>res.ban;
    res1data>>res.eng;
    res1data>>res.math;
    res1data>>res.social;
    res1data>>res.science;
    res1data>>res.islam;



          }


         res2.close();
         res1data.close();
         remove("result.txt");
         rename("newResult.txt", "result.txt");


        cout<<"\n\n\t\t\t\t\t\t\t\t\t   UPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the previous page  ";
        getch();
        system("cls");
                break;
         }


        }
        }while(ch3!=0);
         }
        else
         {

            cout<< "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOpps Username or Password is incorrect. Please Try Again.";
            getch();

            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease wait................. \n\n";
            system("cls");
        }
     }

     goto loop;
     break;

 case 3 :
     {
        string u,n,p;
    int log,telog;
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\tFORGET PASSWORD  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;


        cout<<"\n\t\t\t\t\t\t\t\t\tPLEASE PROVIDE YOUR INFORMATION CAREFULLY "<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\tEnter User Name          :   ";
        cin>>u;

        ifstream match("Slogin.txt");
        while(match>>n>>p)
        {
              if(n==u)
              {
                log=1;
              }

        }


        if(log==1)
        {

        cout<<"\n\n\n\t\t\t\t\t\t\t\t\tUPDATE INFORMATION SUCCESSFUL \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;


        cout<<"\n\n\n\t\t\t\t\t\t\t\t\tHere is your Username      "<<n<<endl;
        cout<<"\n\n\t\t\t\t\t\t\t\t\tHere is your Password      "<<p;
        }
        else
        {
            cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong username..Please re-register again.      ";
        }
        cout<< "\n\n\t\t\t\t\t\t\t\t\tPress any key to go to  the previous page  ";
        getch();
        cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPlease Wait................";
        system("cls");
     }
     break;
 case 0 :
     {

     cout<< "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Please wait...............";
     break;
     }
 default :
    {
         cout<< "\n\n\t\t\t\t\t\t\t\t\tInvalid Option.";
    }
 }


}
 system("cls");

        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\**********************************************************";
        cout<<"\n\t\t\t\t\t\t\t\t\tTHANKYOU FOR BEING WITH US\n";
        cout<<"\t\t\t\t\t\t****************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\t\t\t   KEEP SHARING KNOWLEDGE  \n\n";
        cout<<"\t\t\t\t\t\t----------------------------------------------------------------------------"<<endl<<endl;

 getch();
 return 0;


}//while loop



