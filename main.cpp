#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
//#include<conio.h>

using namespace std;

class questions
{
  private:
      string ques;
      string ans1;
      string ans2;
      string ans3;
      string ans4;

      int correct_ans;
      int question_score;

  public:
    int set_value(string, string, string, string,string, int,int);// passing options correct answer marks
    int ask_question();
    int welcome();
    int iq();// iq calculation
    int main_menu();
};



int guess,a;       //global declaration input for option
float total,IQ;     // total marks iq
char name[50];        //players name
int in = 0,wr = 0,cr = 0,b;

int main()

{
    questions qm;
    qm.main_menu();
    questions q;
    q.welcome();
    return 0;
}


    int questions::welcome()
     {

            //system("CLS");
               cout<<endl;
               cout<<" Write down your  name and press enter "<<endl;
               cin.ignore();
               cin.getline(name,30);

               cout<<endl;
               system("CLS");
               cout<<endl;
               cout<<"   Press  [Y] and  press enter to play "<<endl;


                cout<<endl;
                string respond;
                cin>>respond;
                system("CLS");



   if(respond == "Y" | respond == "y" )
    {
    questions q1;
    questions q2;
    questions q3;
    questions q4;
    questions q5;
    cout<<endl;

    q1.set_value("Fill in the missing number. 0 1 1 2 3 5 8 13 ? 34 55 ",

                 "  17",
                 "  21",
                 "  23",
                 "  22",
                 2,
                 20);

    q2.set_value("If 8+30= 308, 11+5= 511, then 10+62= ? ",
                 " 7202",
                 " 6020",
                 " 6030",
                 " 6210",
                 4,
                 20);
    q3.set_value("Divide 30 by half and 10. What you will get? ",
                 " 70",
                 " 30",
                 " 45",
                 " 60",
                 1,
                 20);
    q4.set_value("R likes 25 but not 24,he likes 400 but not 300, he likes 144 but not  145. Which does he likes? ",
                 " 200",
                 " 2045",
                 " 1600",
                 " 1640",
                 3,
                 20);

      q5.set_value("If you count from 1 to 80,how many 7's will pass on the way? ",
                 " 13",
                 " 18",
                 " 17",
                 " 12",
                 2,
                 20);

                 q1.ask_question();
                 q2.ask_question();
                 q3.ask_question();
                 q4.ask_question();
                 q5.ask_question();
                // q6.ask_question();
                 cout<<"total score is "<<total <<" out of 50"<<endl;
                 cout<<endl;



    }

     else if(respond == "N" | respond == "n"){
        cout<<"Okay good bye "<<endl;
        exit(1);
    }

     else
        {
         cout<<"Okay good bye "<<endl;
                 exit(1);

         return 0;

        }



}
                 int questions::set_value(string qu,string a1,string a2,string a3,string a4,int ca,int qs)
                 {
                     ques=qu;
                     ans1=a1;
                     ans2=a2;
                     ans3=a3;
                     ans4=a4;
                     correct_ans=ca;
                     question_score=qs;
                 }


                 int questions::ask_question()        // questions and options
                 {

                    cout<<endl;
                    cout<<" # "<<ques<<endl;
                    cout<<endl;
                    cout<<" 1. "<<ans1<<endl;
                    cout<<" 2. "<<ans2<<endl;
                    cout<<" 3. "<<ans3<<endl;
                    cout<<" 4. "<<ans4<<endl;
                    cout<<endl;
                    cout<<endl;

                    cout<<" Enter an option :"<<endl;
                    int guess;
                    cin>>guess;
                    system("CLS");



                    if(guess==correct_ans)
                    {
                        ++cr;
                        cout<<endl;
                        cout<<"right answer!!"<<endl;
                        total = total+question_score;
                        cout<<"score : "<<question_score<<"  out of "<<question_score<<"!"<<endl;
                        cout<<" \n"<<endl;
                        system("pause");
                        system("CLS");

                    }

                    else if(guess > 4)
                    {

                      in++;
                        cout<<endl;
                       cout<<" Invalid option !!"<<endl;
                    }

                    else
                        {
                            wr++;
                        cout<<endl;
                        cout<<"wrong answer.."<<endl;
                        cout<<"score: 0 "<<" out of "<<question_score<<"!"<<endl;
                        cout<<"correct answer is "<<correct_ans<<endl;
                        cout<<" \n"<<endl;
                        system("pause");
                        system("CLS");
                       }

                    cout<<endl;

                 }
                           // function of MAIN MENU //

                    int questions::main_menu()
                {
                  do{


               cout<<endl;
               cout<<endl;
               cout<<"              ********      *     *    ***   *******    *******     *     *                     "<<endl;
               cout<<"              *    * *      *     *     *         *          *       *   *                      "<<endl;
               cout<<"              *      *      *     *     *        *          *          *                        "<<endl;
               cout<<"              *      **     *     *     *       *          *           *                        "<<endl;
               cout<<"              *      * *    *     *     *      *          *            *                        "<<endl;
               cout<<"              ********  *   *******    ***    *******    *******       *                        "<<endl;


               cout<<endl;
               cout<<"\n\n\n"<<endl;

                    cout<<"                      Press 1 and press enter to * PLAY *"<<"\n"<<endl;
                    cout<<"                      Press 2 and press enter to * HELP *"<<"\n"<<endl;
                    cout<<"                      Press 3 and press enter to * ABOUT GAME DEVELOPER *"<<"\n"<<endl;
                    cout<<"                      Press 4 and press enter to * EXIT *"<<endl;
                    cout<<"\n \n \t              Enter an option  \t";



                 cin>>a;


                    switch(a)
                    {

                    case 1 :

                        system("CLS");
                        welcome();
                        iq();

                      break;

                    case 2 :

                        system("CLS");

                        cout<<" \n\n                                     HOW TO PLAY            "<<endl;

                        cout<<" \n\n WELCOME TO QUIZZY. In this game you will get 5 questions each question has 4 options.\n"<<endl;
                        cout<<" If you choose right option you will get 20 marks per question otherwise you will not get any marks\n"<<endl;
                        cout<<" If you press invalid option you will get no marks for this question\n"<<endl;
                        cout<<" At last your iq level will be shown. "<<endl;

                        cout<<"\n [If you choose anything without digit as option the game will not continue]"<<endl;


                       break;
                    case 3 :
                        system("CLS");
                        cout<<" \n\n\n\n Name       : Tazalla Lina"<<endl;
                        cout<<" ID         : 1737820113"<<endl;
                        cout<<" Department : CSE"<<endl;
                        cout<<" Session    : 2016-17"<<endl;


                       break;
                    case 4 :

                        system("CLS");
                        exit(1);
                    default:
                        system("CLS");
                        cout<<"Invalid option"<<endl;
                        break;
                    }





                    cout<<"\n\n\n\n\tIf you want to go to main menu press : [Y] and enter "<<endl;
                    cout<<"     __________________________________________________________"<<endl;
                    string Str;
                    cin>>Str;
                    system("CLS");

                    if(Str == "Y" || Str == "y")
                        b = 1;
                    else
                        exit(1);
                 //}while(1);

                }while(b);



              }

                   int questions::iq()
                    {
                        float IQ;

                        system("CLS");

                        IQ = (total /100)*100;

                        cout<<endl;
                        cout<<"              \n            "<<name<<", your iq is  "<<IQ<<" %"<<"\n"<<endl;
                        cout<<"          --------------------------------------"<<"\n"<<endl;
                        cout<<"          _________________________________\n\n"<<endl;
                        cout<<"          #  Total marks              : "<<total<<"\n"<<endl;
                        cout<<"          # Number of invalid options : "<<in<<"\n"<<endl;
                        cout<<"          # Number of wrong answers   : "<<wr<<"\n"<<endl;
                        cout<<"          # Number of correct answers : "<<cr<<"\n"<<endl;
                        cout<< "         _________________________________"<<endl;


                    }


