/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#include <cmath>


using namespace std;
class recatngle{
    public: float length=2,width=2;public: float theta=0;public: float x1=0,y1=0,x2=length,y2=width;
   public: void configure(){
        cout<<"Enter  length"<<endl;
        cin>>length;x2=length;
        cout<<"Enter width"<<endl;
        cin>>width;y2=width;
    }
    void configuration(){if(!theta)
        cout<<"One end of a diagonal is :"<<x1<<" "<<y1<<"the other is at :("<<x2<<","<<y2<<")"<<endl;
        cout<<"angle of square with x-axis is:"<<theta<<endl;
    }
    void rotate(){
        cout<<"enter the angle to be rotated"<<endl;
        float angle;
        cin>>angle;
        theta+=angle;
        cout<<"final angle with x axis is:"<<theta<<endl;
        float t=x2;
        x2=x1+(x2-x1)*cos(angle*M_PI/180)-(y2-y1)*sin(angle*M_PI/180);
        y2=y1+(y2-y1)*cos(angle*M_PI/180)+(t-x1)*sin(angle*M_PI/180);
        if(x1==0&&y1==0)
        cout<<"one end of a diagonal is still at origin and the other is at:"<<x2<<" "<<y2<<endl;
        else cout<<"one end is at:"<<x1<<" "<<y1<<","<<x2<<" "<<y2<<endl;
        
    }
    void positionDetector(){
        float y,x;
        cout<<"Enter the coordinates(x,y) for position detection:"<<endl;
        cin>>x>>y;
        float r=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        cout<<r<<endl;
        float inclination=atan((y-y1)/(x-x1))*(180/M_PI);
        if(inclination>=0){
            cout<<"angle of point with base line of square:"<<inclination<<endl;
        }else cout<<"angle of point with base line of square:"<<180+inclination<<endl;
        if(inclination-theta<=90){//cout<<inclination-theta<<endl;
            if(inclination-theta<=atan(width/length)*180/M_PI){if(length*(1/cos((inclination-theta)*(M_PI/180)))-r>=-1e-20) cout<<"the point is inside the square"<<endl;}
            else {
                if(width*(1/cos((90-inclination-theta)*(M_PI/180)))-r>=-1e-4)
                cout<<"the point is inside the square"<<endl;
            }
            
        }
        
    }
    void translate(){
        float x,y;
        cout<<"enter the figure of translation parallel to x and y axis:"<<endl;
        cin>>x>>y;
        x1+=x;
        y1+=y;
        y2+=y;x2+=x;
        cout<<"the new diagonal coordinates of square:"<<"("<<x1<<","<<y1<<")"<<","<<"("<<x2<<","<<y2<<")"<<endl;
    
    }
    
    
};


int main()
{

    return 0;
}
