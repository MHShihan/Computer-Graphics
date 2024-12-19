///glColor3ub(31,31,31) road pitch color
///glColor4f(1.0f, 1.0f, 0.0f, 0.0f) road side-line yellowish

///glColor3ub(18, 48, 4) green terrain+grass etc

#include<bits/stdc++.h>
#include<cstdio>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;


//Variable declaration
GLfloat position = 0.0f, position1 = 0.0f;
GLfloat position2 = 0.0f, position_sea=-0.3f;
GLfloat position3 = 0.0f;
GLfloat speed = 0.02f;

//GLfloat speed = 0.1f;
GLfloat parameter=6;
#define PI acos(-1)


void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;


   if(position3 < -1.0)
        position3 = 1.2f;

    position3 -= speed;

    if(position1 < -1.0)
    position1 = 1.0f;

    position1 -= 0.05;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void init(){
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}


//Rain
void rain()
{
    //White color rain
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2d(0.0,1.7);
    glVertex2d(0.0,1.6);

    glVertex2d(0.0,1.5);
    glVertex2d(0.0,1.4);

    glVertex2d(0.0,1.3);
    glVertex2d(0.0,1.2);

    glVertex2d(0.0,1.1);
    glVertex2d(0.0,1.0);

    glVertex2d(0.0,0.9);
    glVertex2d(0.0,0.8);

    glVertex2d(0.0,0.7);
    glVertex2d(0.0,0.6);

    glVertex2d(0.0,0.5);
    glVertex2d(0.0,0.4);
    glVertex2d(0.0,0.3);
    glVertex2d(0.0,0.2);

    glVertex2d(0.0,0.1);
    glVertex2d(0.0,0.0);

    glVertex2d(0.0,-0.1);
    glVertex2d(0.0,-0.2);

    glVertex2d(0.0,-0.3);
    glVertex2d(0.0,-0.4);

    glVertex2d(0.0,-0.6);
    glVertex2d(0.0,-0.7);

    glVertex2d(0.0,-0.8);
    glVertex2d(0.0,-0.9);


    glVertex2d(0.0,-1.0);
    glVertex2d(0.0,-1.1);

    glVertex2d(0.0,-1.2);
    glVertex2d(0.0,-1.3);

    glVertex2d(0.0,-1.4);
    glVertex2d(0.0,-1.5);

    glVertex2d(0.0,-1.2);
    glVertex2d(0.0,-1.3);
    glEnd();

}


///marine_drive start
void hill(){


    glBegin(GL_TRIANGLES);
    glColor3ub(33, 89, 42);

    glVertex2d(-0.2,0);
    glVertex2d(0.2,0);
    glVertex2d(0,0.4);
    glEnd();

}


void draw_background(){
//Top sky color
    glBegin(GL_QUADS);
    glColor3ub(133, 193, 233);
    glVertex2d(-1,0.2);
    glVertex2d(1,0.2);
    glVertex2d(1,1);
    glVertex2d(-1,1);
    glEnd();

//hill start
     glLoadIdentity();
     glScalef(1.8,1.8,0);
     glTranslatef(-0.1,0.0,0);
     hill();

     glLoadIdentity();
     glScalef(1.3,1.3,0);
     glTranslatef(-0.75,0.0,0);
     hill();

     glLoadIdentity();
     glScalef(1.3,1.3,0);
     glTranslatef(-0.5,0.0,0);
     hill();

     glLoadIdentity();
     glScalef(1.3,1.3,0);
     glTranslatef(-0.35,0.0,0);
     hill();

     glLoadIdentity();
     glScalef(1.8,1.8,0);
     glTranslatef(0.1,0.0,0);
     hill();

     glLoadIdentity();
     glScalef(1.8,1.8,0);
     glTranslatef(0.5,0.0,0);
     hill();
  //hill done

     glLoadIdentity();
     glScalef(1.5,1.5,0);
     glTranslatef(0.3,0.0,0);
     hill();

     glLoadIdentity();
     glScalef(1.3,1.3,0);
     glTranslatef(0.45,0.0,0);
     hill();

     glLoadIdentity();
     glScalef(1.8,1.8,0);
     glTranslatef(-0.4,0.0,0);
     hill();

// Bottom blue color
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(64, 164, 223);
    glVertex2d(-1,-1);
    glVertex2d(1,-1);
    glVertex2d(1,0.2);
    glVertex2d(-1,0.2);
    glEnd();

}


//Roadside Rail
void rail(){
    glBegin(GL_LINES);
    glColor3ub(212,212,212);
    glVertex2f(-0.82f, -0.54f);
    glVertex2f(-0.82f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.79f, -0.54f);
    glVertex2f(-0.79f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.76f, -0.54f);
    glVertex2f(-0.76f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.73f, -0.54f);
    glVertex2f(-0.73f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.7f, -0.54f);
    glVertex2f(-0.7f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.67f, -0.54f);
    glVertex2f(-0.67f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.64f, -0.54f);
    glVertex2f(-0.64f, -0.6f);
    glEnd();
}


//Total Number of rail
void rail_total(){
    glLineWidth(0.002);
    glBegin(GL_LINES);

      glColor3ub(128,128,128);
      glVertex2f(-1.0f, -0.57f);
      glVertex2f( 1.0f, -0.57f);

   glEnd();
       glBegin(GL_LINES);
      glVertex2f(-1.0f, -0.54f);
      glVertex2f( 1.0f, -0.54f);
    glEnd();

//1st rail
    rail();
    glTranslatef(0.245,0.0,0); //2nd rail
     rail();
    glTranslatef(0.245,0.0,0); //3rd rail
    rail();
    glTranslatef(0.235,0.0,0); //4th rail
    rail();
    glTranslatef(0.245,0.0,0); //5 rail
    rail();
    glTranslatef(0.245,0.0,0); //6 rail
    rail();
     glTranslatef(0.245,0.0,0); //7 rail
    rail();

}


//road
void road(){
      glBegin(GL_QUADS);
      glColor3ub(31,31,31);
      glVertex2f(-1.0f, -0.3f);
      glVertex2f( 1.0f, -0.3f);
      glVertex2f( 1.0f, -0.6f);
      glVertex2f( -1.0f, -0.6f);
   glEnd();

 //side line up
    glBegin(GL_QUADS);
      glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
      glVertex2f(-1.0f, -0.3f);
      glVertex2f( 1.0f, -0.3f);
      glVertex2f( 1.0f, -0.29f);
      glVertex2f( -1.0f, -0.29f);
   glEnd();

//side line down
    glBegin(GL_QUADS);
      glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
      glVertex2f(-1.0f, -0.6f);
      glVertex2f( 1.0f, -0.6f);
      glVertex2f( 1.0f, -0.61f);
      glVertex2f( -1.0f, -0.61f);
   glEnd();

//mid-line

      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-1.0f, -0.45f);
      glVertex2f( 1.0f, -0.45f);
      glVertex2f( 1.0f, -0.455f);
      glVertex2f( -1.0f, -0.455f);
   glEnd();


//road-side-up
//green
     glBegin(GL_QUADS);
      glColor3ub(33, 89, 42);
      glVertex2f(-1.0f, -0.25f);
      glVertex2f( 1.0f, -0.25f);
      glVertex2f( 1.0f, -0.29f);
      glVertex2f( -1.0f, -0.29f);
   glEnd();

//beach
     glBegin(GL_QUADS);
      glColor3ub(238, 214, 175);
      glVertex2f(-1.0f, -0.18f);
      glVertex2f( 1.0f, -0.18f);
      glVertex2f( 1.0f, -0.25f);
      glVertex2f( -1.0f, -0.25f);
   glEnd();

//road-side-down
//green
     glBegin(GL_QUADS);
      glColor3ub(33, 89, 42);
      glVertex2f(-1.0f, -0.8f);
      glVertex2f( 1.0f, -0.8f);
      glVertex2f( 1.0f, -0.61f);
      glVertex2f( -1.0f, -0.61f);
   glEnd();

//railing lower side
rail_total();

//railing upper side
glLoadIdentity();
glScalef(1.2,1.2,0);
glTranslatef(0.0,0.468,0);
rail_total();
}


//Car
void car(){
    glScalef(0.2,0.2,0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.75, 0.71);

//car-body
    glVertex2f(-0.8,0.0);
    glVertex2f(-0.8,0.3);
    glVertex2f(-0.5,0.3);
    glVertex2f(-0.35,0.6);
    glVertex2f(0.35,0.6);
    glVertex2f(0.5,0.3);
    glVertex2f(0.8,0.3);
    glVertex2f(0.8,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.54, 0.61, 0.55);

    glVertex2f(-0.54,0.31);
    glVertex2f(-0.34,0.58);
    glVertex2f(0.34,0.58);
    glVertex2f(0.475,0.31);
    glEnd();

    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0,0.58);
    glVertex2f(0,0.31);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(0.62,0.0);
    glVertex2f(0.57,0.1);
    glVertex2f(0.37,0.1);
    glVertex2f(0.32,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-0.62,0.0);
    glVertex2f(-0.57,0.1);
    glVertex2f(-0.37,0.1);
    glVertex2f(-0.32,0.0);
    glEnd();

// Car Wheel
    float x1=-0.47,x2=0.47,y1=-0.033,y2=-0.033, radius=0.13;;
	int i;
	int triangleAmount = 360; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f *3.14159;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.7, 0.75, 0.71);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.7, 0.75, 0.71);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


//Marine_Drive
void marine_drive(){
    glPushMatrix();
    draw_background();
    glPopMatrix();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0,.2,0);
    glScalef(1.2,1.2,0);
    road();
    glPopMatrix();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0,-.25,0);
    glTranslatef(position,position2, 0.0f);
    car();
    glPopMatrix();
}
///marine_drive_done


void display() {
    glLoadIdentity();
    glPushMatrix();
    marine_drive();
    glPopMatrix();

    glLineWidth(2.0);
    glPushMatrix();
    glTranslatef(-0.9,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.3,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.1,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.9,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.7,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.6,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2,position1, 0.0f);
    rain();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.1,position1, 0.0f);
    rain();
    glPopMatrix();

    glFlush();
}


int main(int argc, char** argv) {
   glutInit(&argc, argv);

   glutInitWindowSize(1600, 900);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Marine Drive");

   glutDisplayFunc(display);
   init();

   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
