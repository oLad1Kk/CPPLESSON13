#include <iostream>
#include "MyQueue.h"
#include "MyPriorityQueue.h"
#include "Song.h"
#include <vector>
#include "Windows.h"
#include "Person.h"



int main()
{
    //myQueue::Queue<int> a;
    //a.push_back(4);
    //a.push_back(3);
    //a.push_back(2);
    //a.push_back(1);

    //while (!a.isEmpty())
    //{
    //    cout << "First: " << a.first() << endl;
    //    a.show();
    //    a.pop_front();
    //}
    //a.show();

    //vector<Song> all_music;
    //ifstream file("music.txt");
    //if (file.is_open())
    //{
    //    while (!file.eof())
    //    {
    //        Song a;
    //        a.load(file);
    //        all_music.push_back(a);
    //    }
    //    file.close();
    //}
    //else
    //{
    //    cout << "Error\n";
    //}
    ////cout << "Size: " << all_music.size();
    //myQueue::Queue<Song> player;
    //player.push_back(all_music[5]);
    //player.push_back(all_music[1]);
    //player.push_back(all_music[5]);
    //player.push_back(all_music[3]);
    //while (!player.isEmpty())
    //{
    //    player.first().show();
    //    player.pop_front();
    //    Sleep(3000);
    //    system("cls");
    //}

    //myQueue::PriorityQueue<int> b;
    //b.push_back(7);
    //b.push_back(3);
    //b.push_back(5);
    //b.push_back(9);
    //b.push_back(1);
    //b.push_back(4);

    //while (!b.isEmpty())
    //{
    //    cout << "First: " << b.first() << endl;
    //    b.show();
    //    b.pop_front();
    //}
    myQueue::PriorityQueue<Person> hospital;
    hospital.push_back(Person("Maria", 1));
    hospital.push_back(Person("Ivan", 4));
    hospital.push_back(Person("Petro", 2));
    hospital.push_back(Person("Andriy", 1));
    while (!hospital.isEmpty())
    {
        hospital.first().show();
        hospital.pop_front();
    }
}
