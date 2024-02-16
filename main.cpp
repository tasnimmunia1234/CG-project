/*#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
#include<stdio.h>*/
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <stdlib.h>
#include <math.h>
#include<stdio.h>

float cx=0,angle = 0;

void init(void)
{
    glClearColor(0,0.3,0.2,0);
    glOrtho(-10,+10,-10,+10,-5,+5);
}
void sky()
{

    
    glPushMatrix();
    glColor3ub(36,52,71);
    glTranslated(0,9.9,1);
    glBegin(GL_QUADS);
    glVertex2d(-150.0,0.0);
    glVertex2d(150.0,0.0);
    glVertex2d(150.0,-10);
    glVertex2d(-150.0,-10);
    glEnd();
    glPopMatrix();
    
}

void road(){
    glPushMatrix();
    glTranslated(1,-1.2, 0);
    glColor3f(0.25, 0.25, 0.25);
    glBegin(GL_POLYGON);
    
    glVertex2d(16, -1);
    glVertex2d(-16, -1);
    glVertex2d(-16, 1);
    glVertex2d(16, 1);

    glEnd();
    glPopMatrix();

    glTranslated(0.5, -1.67, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2d(16, 0.55);
    glVertex2d(-16, 0.55);
    glEnd();
}
void circle1(float r1, float r2)
{
    float angle=0.0;
    float x,y;
    int i;
    glColor3f(0.9,0.7,0.9);
    glBegin(GL_POLYGON);
    for(i=0; i<500; i++)
    {
        angle=(360*i)/600;
        x=r1*cos(angle);
        y=r2*sin(angle);
        glVertex2d(x,y);
    }
    glEnd();

}
void lampPost(){
    glPushMatrix();
    glTranslated(0, 1.7, 0);
    glColor3f(0.22, 0.26, 0.13);
    glBegin(GL_POLYGON);
    glVertex2d(0.15, 1);
    glVertex2d(0.15, -1.2);
    glVertex2d(-0.15, -1.2);
    glVertex2d(-0.15, 1);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, 2.52, 0);
    circle1(0.5, 0.4);
    glPopMatrix();
    
    
    
}
void car_body()
{
    glPushMatrix();
    glTranslated(2.45, 0.4, 0);
    //glScaled(1.5, 1, 0);
    glColor3f(1.8, 1.5, 1.7);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(2.6,0.3);
    glVertex2d(2.7,-0.5);
    glEnd();
    glPopMatrix();
    
    glColor3d(0,0.5,1);
    glBegin(GL_POLYGON);


    glVertex2d(2,2);

    glVertex2d(3,2);

    glVertex2d(3,0);

    glVertex2d(-3,0);

    glVertex2d(-3,2);

    glVertex2d(-2,2);

    glVertex2d(-2,3);

    glVertex2d(2,3);
    glEnd();
    
    
    
}


void moon(float r1,float r2){
    int i = 0;
    float angle = 0.0;
    glColor3f(1, 1,1);
    glBegin(GL_POLYGON);
        for (i=0; i<=400; i++)
        {
            angle = (360 * i)/400;
            glVertex2d(r1*cos(angle),r2*sin (angle));
        }

    glEnd();
}


void wheel(float r1,float r2){
    int i = 0;
    float angle = 0.0;
    glColor3f(0.7, 0.5, 0.5);
    glBegin(GL_POLYGON);
        for (i=0; i<=400; i++)
        {
            angle = (360 * i)/400;
            glVertex2d(r1*cos(angle),r2*sin (angle));
        }

    glEnd();
}


void lines(){
    glColor3b(1, 1, 1);
    glBegin(GL_LINES);
    glVertex2d(10, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0);
    glVertex2d(-10, 0);
    glEnd();

}


void house(){

    glBegin(GL_POLYGON);
    glColor3d(2, 3, 5);
    glVertex2d(5.1, 0);
    glColor3d(0.2, 0.4, 0);
    glVertex2d(0, 0);
    glColor3d(0.6, 0, 0);
    glVertex2d(0, 7);
    glColor3d(0.6, 0, 0);
    glVertex2d(5.1, 7);
    glEnd();


    
    glColor3b(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 2.5);
    glVertex2d(5, 2.5);
    glVertex2d(5, 2.6);
    glVertex2d(0, 2.6);
    glEnd();

    glPushMatrix();
    glTranslated(0, 2.3, 0);
    glColor3b(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 2.5);
    glVertex2d(5, 2.5);
    glVertex2d(5, 2.6);
    glVertex2d(0, 2.6);
    glEnd();
    glPopMatrix();
    
    glTranslated(3.7, 3.6, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
    glEnd();

    
    glTranslated(-3.4, 0, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
    glEnd();
    
    glTranslated(1.8, 0, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
    glEnd();

    
    glTranslated(-1.8, -2.4, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
 
    glEnd();

    glTranslated(3.4, -0.1, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
    glEnd();


    glTranslated(-1.8, 0, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
    glEnd();
    
    glTranslated(-1.6, 4.4, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
 
    glEnd();

    glTranslated(3.4, 0.3, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
    glEnd();


    glTranslated(-1.8, 0, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.77, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.77);
    glVertex2d(0.77, 0.77);
    glEnd();
    
    glPushMatrix();
    glTranslated(0.4, -5.8, 0);
    //glColor3d(1.3, 1.7, 0.9);
    glColor3d(1.3, 0.9, 0.5);
    glBegin(GL_POLYGON);
    glVertex2d(1.7, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.6);
    glVertex2d(1.7, 0.6);
    glEnd();
    glPopMatrix();
    
}



void house1(){
    
    glPushMatrix();
    glTranslated(9.2, 5.73, 0);
    glColor3f(0.8, 1.5, 0.7);
    glBegin(GL_POLYGON);
    
    glVertex2d(0.48,1.5);
    glVertex2d(0.48, -2);
    glVertex2d(-0.7, -2);
    glVertex2d(-0.7, 1.5);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(9.75, 5.64, 0);
    glColor3f(1.2, 2, 0.4);
    glBegin(GL_POLYGON);
    glVertex2d(0.1,1.35);
    glVertex2d(0.1, -1.7);
    glVertex2d(-0.1, -1.91);
    glVertex2d(-0.1, 1.6);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(8.6, 6.8, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(8.6, 6.3, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(8.6, 5.88, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    
    glPushMatrix();
    glTranslated(8.6, 5.4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(8.6, 5, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(8.6, 4.5, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(8.6, 4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(9, 6.8, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(9, 6.3, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(9, 5.88, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    
    glPushMatrix();
    glTranslated(9, 5.4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(9, 5, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(9, 4.5, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    

    glPushMatrix();
    glTranslated(9, 4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
     
    glPushMatrix();
    glTranslated(8.5, 3.7, 0);
    glColor3f(0, 0.35, 0.35);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.1, 0.1);
    glVertex2d(1, 0.1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();
    
    
}
void oval(float r1,float r2){
    int i = 0;
    float angle = 0.0;
    glColor3ub(110,205,50);
    glBegin(GL_POLYGON);
        for (i=0; i<=400; i++)
        {
            angle = (360 * i)/400;
            glVertex2d(r1*cos(angle),r2*sin (angle));
        }

    glEnd();
}

void tree(){
    
    glPushMatrix();
    glTranslated(1, 0.82, 0);
    glPopMatrix();
    
    glTranslated(5.2, 2.5, 0);
    glColor3f(0.53,0.26,0.074);
    glBegin(GL_POLYGON);
    glVertex2d(0.333,2.3);
    glVertex2d(0.333, -2.2);
    glVertex2d(-0.333, -2.2);
    glVertex2d(-0.333, 2.3);

    glEnd();
    
    glTranslated(0.3, 3, 0);
    glBegin(GL_POLYGON);
    oval(1,1);
    glEnd();
    
    glTranslated(0.9, 1.33, 0);
    glBegin(GL_POLYGON);
    oval(1,1);
    glEnd();
    
    glTranslated(-1.3, 0.8, 0);
    glBegin(GL_POLYGON);
    oval(1,1);
    glEnd();
    
    glTranslated(-1.2, -0.2, 0);
    glBegin(GL_POLYGON);
    oval(1,1);
    glEnd();
    
    glTranslated(0.2, -1.4, 0);
    glBegin(GL_POLYGON);
    oval(1,1);
    glEnd();
    
    glTranslated(0.6, 0.4, 0);
    glBegin(GL_POLYGON);
    oval(1,1);
    glEnd();
    
    glTranslated(2.5, -0.5, 0);
    glBegin(GL_POLYGON);
    oval(1,1);
    glEnd();
   
    
}
void line(void)
{
    glColor3d(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(0,2);
    glVertex2d(0,0);
    glVertex2d(2,0);
    glVertex2d(0,0);
    glVertex2d(-2,0);
     glVertex2d(0,0);
    glVertex2d(0,-2);
    glVertex2d(0,0);


    glEnd();
}
void star(){
    glPushMatrix();
    glTranslated(6,11, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
    
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0, 10, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
    
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-67, 11.6, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
   
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-50, 12.5, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
    
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-15, 11.75, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
    
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-22, 13.6, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
 
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(33, 13.7, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
    
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(19, 10, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
    
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(23, 11.8, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
  
    glVertex2d(1, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-24, 10.8, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
   
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-66, 8, 0);
    glColor3d(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 1);
    glVertex2d(1, 1);
    glVertex2d(1, 0);
    glEnd();
    glPopMatrix();

}



void river()
{

    
    glPushMatrix();
    glColor3ub(0,150,220);
    glTranslated(0,9.9,1);
    glBegin(GL_POLYGON);
    glVertex2d(-15,-5);
    glVertex2d(15,-2);
    glVertex2d(15,5);
    glVertex2d(-15,2.5);
    glEnd();
    glPopMatrix();
    
}
void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslated(0,0.4,0);
    road();
    glPopMatrix();
    
    
    sky();
    glPushMatrix();
    glTranslated(4, -0, 0);
    house();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16, -5.8, 0);
    glScaled(2, 1.6, 0);
    house1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-7, -0.34, 0);
    glScaled(0.9, 0.6, 0);
    tree();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-11, -0.25, 0);
    glScaled(0.5, 0.4, 0);
    tree();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(-5, -0.6, 0);
    lampPost();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, -0.6, 0);
    lampPost();
    glPopMatrix();
    glPushMatrix();
    glTranslated(5, -0.6, 0);
    lampPost();
    glPopMatrix();

glPushMatrix();
glTranslated(cx,0,0);
glScaled(0.70,0.70,1);

        car_body();

    glPushMatrix();
        glTranslated(1.5,0,0);
        glRotated(angle, 0, 0, -1);
         glScaled(0.30,0.30,1);
        wheel(2,2);
        line();
    glPopMatrix();
    glPushMatrix();
        glTranslated(-1.5,0,0);
         glRotated(angle, 0, 0, -1);
         glScaled(0.30,0.30,1);
        wheel(2,2);
        line();

    glPopMatrix();

glPopMatrix();
    glPushMatrix();
    glTranslated(-4, 8, 0);
    moon(0.8, 0.8);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, -19.2, 0);
    river();
    glPopMatrix();
    
    glPushMatrix();
    glScaled(0.1, 0.1, 0);
    glTranslated(40, 60, 0);
   star();
    glPopMatrix();
    
    glPushMatrix();
    glScaled(0.1, 0.1, 0);
    glTranslated(-24, 50, 0);
    star();
    glPopMatrix();
    glPushMatrix();
    glScaled(0.1, 0.1, 0);
    glTranslated(20, 70, 0);
   star();
    glPopMatrix();
    glPushMatrix();
    glScaled(0.1, 0.1, 0);
    glTranslated(-60, 75, 0);
   star();
    glPopMatrix();
    glFlush();


}

void carMoveForward(){
     angle = angle + 0.5;
     cx+=0.02;
     if(cx>=13.5)
        cx=-13.5;
     glutPostRedisplay();

}

void carMoveBackward(){
   angle = angle - 0.5;
     cx -=0.02;
     if(cx< -13.5)
     cx= 13.5;
     glutPostRedisplay();


}


void specialKey(int key, int x, int y){

      switch(key){

        case GLUT_KEY_RIGHT:
                   glutIdleFunc(carMoveForward);// car move er jonno

                    break;
        case GLUT_KEY_LEFT:
                   glutIdleFunc(carMoveBackward);
                   break;
        case GLUT_KEY_DOWN:
                break;
        case GLUT_KEY_UP:
                break;
        default:
              break;
      }


}

int main(int argc,char** argv)
{
    int width = glutGet(GLUT_SCREEN_WIDTH);
    int height = glutGet(GLUT_SCREEN_HEIGHT);
    
    glutInit(&argc, argv);
    glutInitWindowSize(width,height);
    
    glutInitWindowPosition(50,-20);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("GLUT Shapes");
    init();

    glutSpecialFunc(specialKey);
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
