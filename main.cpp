#include <iostream>
#include <sys/time.h>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

void StopWatch(){
    timeval t1, t2;
    gettimeofday(&t1, NULL);
    string line;
    cout << '\n' << "Press a Enter to continue...";
    getline(cin,line);
    gettimeofday(&t2, NULL);
    int stopwatchTime = (t2.tv_sec - t1.tv_sec) * 1000 + (t2.tv_usec - t1.tv_usec)/1000;
    cout << "stoper: " << stopwatchTime/1000 << " : " << stopwatchTime%1000 << endl;


}

void Search(int argc, char** argv){

    string primeKey=argv[1];

    if(primeKey=="hello"){
        //system("/bin/bash -c /home/reviracio/Code/CLionProjects/Quiet/bash/HelloWorld.sh &"); //po programie
        system("/home/reviracio/Code/CLionProjects/Quiet/bash/HelloWorld.sh"); //w programie
    }else if(primeKey=="update"){
        system("apt-get update");
    }else if(primeKey=="upgrade"){
        system("apt-get update && apt-get upgrade");
    }else if(primeKey=="stopwatch"){
        StopWatch();
    }

}

int main(int argc, char** argv) {
    cout << "Quiet project: " << endl;

    Search(argc,argv);

    return 0;
}
