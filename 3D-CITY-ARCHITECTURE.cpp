#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>
#include <iostream>
using namespace std;

void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void resize(int, int);
void house(float,float,float);
void apart(float,float,float);
void stand(float ,float ,float );
float  h=5,h1=6,d1=4,g=1,g1=2;

void init(void)
{
		glClearColor(0.0,0.0,0.0,0.0);
		glEnable(GL_DEPTH_TEST);
		glMatrixMode(GL_MODELVIEW);
}

//drawing Apartments
void apart(float x,float y,float z)
{
	int i;
	int j;

	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+0.5);
	glVertex3f(x+45,y,z+0.5);
	glVertex3f(x+45,y+100,z+0.5);
 	glVertex3f(x,y+100,z+0.5);
	glEnd();

	glColor3f(0.8,0.8,0.8); //apartment windows color
	for(j=0;j<8;j++)
        {
            glPushMatrix();
            glTranslatef(0,-12*j,0);
            for(i=0;i<4;i++)
                {
                    glPushMatrix();
                    glTranslatef(11*i,0,0);

                    glBegin(GL_POLYGON);
                    glVertex3f(x+2,y+98,z);
                    glVertex3f(x+10,y+98,z);
                    glVertex3f(x+10,y+88,z);
                    glVertex3f(x+2,y+88,z);
                    glEnd();

                    glPopMatrix();
                }
            glPopMatrix();
        }

    glColor3f(0,0,0);
    for(j=0;j<8;j++){
            glPushMatrix();
            glTranslatef(0,-12*j,0);

            for(i=0;i<4;i++){
                    glPushMatrix();
                    glTranslatef(11*i,0,0);
                    glBegin(GL_LINE_LOOP);
                    glVertex3f(x+2,y+98,z);
                    glVertex3f(x+10,y+98,z);
                    glVertex3f(x+10,y+88,z);
                    glVertex3f(x+2,y+88,z);
                    glEnd();
                    glPopMatrix();
                    }
            glPopMatrix();
            }
    glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+45-0.5);
	glVertex3f(x+45,y,z+45-0.5);
	glVertex3f(x+45,y+100,z+45-0.5);
 	glVertex3f(x,y+100,z+45-0.5);
	glEnd();
	glColor3f(0.8,0.8,0.8);

	for(j=0;j<8;j++){
            glPushMatrix();
            glTranslatef(0,-12*j,0);
            for(i=0;i<4;i++)
                {
                    glPushMatrix();
                    glTranslatef(11*i,0,0);
                    glBegin(GL_POLYGON);
                    glVertex3f(x+2,y+98,z+45);
                    glVertex3f(x+10,y+98,z+45);
                    glVertex3f(x+10,y+88,z+45);
                    glVertex3f(x+2,y+88,z+45);
                    glEnd();
                    glPopMatrix();
                }
            glPopMatrix();
            }
    glColor3f(0,0,0);

    for(j=0;j<8;j++){
            glPushMatrix();
            glTranslatef(0,-12*j,0);
            for(i=0;i<4;i++)
                {
                    glPushMatrix();
                    glTranslatef(11*i,0,0);
                    glBegin(GL_LINE_LOOP);
                    glVertex3f(x+2,y+98,z+45);
                    glVertex3f(x+10,y+98,z+45);
                    glVertex3f(x+10,y+88,z+45);
                    glVertex3f(x+2,y+88,z+45);
                    glEnd();
                    glPopMatrix();
                }
            glPopMatrix();
        }
    glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(x+0.5,y,z);
	glVertex3f(x+0.5,y,z+45);
	glVertex3f(x+0.5,y+100,z+45);
 	glVertex3f(x+0.5,y+100,z);
	glEnd();

	glColor3f(0.8,0.8,0.8);
	for(j=0;j<8;j++){
            glPushMatrix();
            glTranslatef(0,-12*j,0);
            for(i=0;i<4;i++){
                    glPushMatrix();
                    glTranslatef(0,0,11*i);
                    glBegin(GL_POLYGON);
                    glVertex3f(x,y+98,z+2);
                    glVertex3f(x,y+98,z+10);
                    glVertex3f(x,y+88,z+10);
                    glVertex3f(x,y+88,z+2);
                    glEnd();
                    glPopMatrix();
                    }
            glPopMatrix();
        }
    glColor3f(0,0,0);
    for(j=0;j<8;j++)
        {
            glPushMatrix();
            glTranslatef(0,-12*j,0);
            for(i=0;i<4;i++)
                {
                    glPushMatrix();
                    glTranslatef(0,0,11*i);
                    glBegin(GL_LINE_LOOP);
                    glVertex3f(x,y+98,z+2);
                    glVertex3f(x,y+98,z+10);
                    glVertex3f(x,y+88,z+10);
                    glVertex3f(x,y+88,z+2);
                    glEnd();
                    glPopMatrix();
                }
            glPopMatrix();
        }
    glColor3f(0.6,0.6,0.6);

	glBegin(GL_POLYGON);
	glVertex3f(x+45-0.5,y,z-0.5);
	glVertex3f(x+45-0.5,y,z+45-0.5);
	glVertex3f(x+45-0.5,y+100,z+45-0.5);
 	glVertex3f(x+45-0.5,y+100,z-0.5);
	glEnd(); glColor3f(0.8,0.8,0.8);

	for(j=0;j<8;j++){
            glPushMatrix();
            glTranslatef(0,-12*j,0);
            for(i=0;i<4;i++)
                {
                    glPushMatrix();
                    glTranslatef(0,0,11*i);
                    glBegin(GL_POLYGON);
                    glVertex3f(x+45,y+98,z+2);
                    glVertex3f(x+45,y+98,z+10);
                    glVertex3f(x+45,y+88,z+10);
                    glVertex3f(x+45,y+88,z+2);
                    glEnd();
                    glPopMatrix();
                }
            glPopMatrix();
        }
    glColor3f(0,0,0);
    for(j=0;j<8;j++){
            glPushMatrix();
            glTranslatef(0,-12*j,0);
            for(i=0;i<4;i++)
                {
                    glPushMatrix();
                    glTranslatef(0,0,11*i);
                    glBegin(GL_LINE_LOOP);
                    glVertex3f(x+45,y+98,z+2);
                    glVertex3f(x+45,y+98,z+10);
                    glVertex3f(x+45,y+88,z+10);
                    glVertex3f(x+45,y+88,z+2);
                    glEnd();
                    glPopMatrix();
                }
            glPopMatrix();
        }
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
	glVertex3f(x,y,z-0.5);
	glVertex3f(x+45,y,z-0.5);
	glVertex3f(x+45,y,z+45-0.5);
 	glVertex3f(x,y,z+45-0.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(x,y+100,z);
	glVertex3f(x+45,y+100,z);
	glVertex3f(x+45,y+100,z+45);
 	glVertex3f(x,y+100,z+45);
	glEnd();
}

void house(float x,float y,float z)
{
	glColor3f(0.01,0.05,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x,y,z+30);
	glVertex3f(x,y+15,z+30);
	glVertex3f(x,y+15,z);
	glEnd();

	glColor3f(0.01,0.05,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x-15,y+15,z);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x-15,y,z+30);
	glEnd();

	glColor3f(0.01,0.05,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+30);
	glVertex3f(x-15,y,z+30);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x,y+15,z+30);
	glEnd();

	glColor3f(0.01,0.05,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x-15,y+15,z);
	glVertex3f(x,y+15,z);
	glVertex3f(x,y,z);
	glEnd();

	glColor3f(0.01,0.05,1.5);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x,y,z);
	glVertex3f(x,y,z+30);
	glVertex3f(x-15,y,z+30);
	glEnd();

	glColor3f(0.51,0.015,0.008);
	glBegin(GL_POLYGON);
	glVertex3f(x+1.69*3,y+3.5*3,z);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glVertex3f(x+1.69*3,y+3.5*3,z+30);
	glEnd();

	glColor3f(0.51,0.015,0.008);
	glBegin(GL_POLYGON);
	glVertex3f(x-6.69*3,y+3.5*3,z);
	glVertex3f(x-6.69*3,y+3.5*3,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glEnd();

	glColor3f(0.1,0.015,0.13);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+15,z);
	glVertex3f(x-15,y+5,z);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glEnd();

	glColor3f(0.1,0.015,0.13);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+15,z+30);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glEnd();
}


void house1()
{
    //House Near Right-Side Buildings
	house(120,0.1,50);
    //Right-Side Houses
	house(120,0.1,90);
	house(160,0.1,90);
	house(80,0.1,90);
	house(160,0.1,50);
    house(80,0.1,50);
    //Left-Side Houses
    house(-130,0.1,120);
    house(-130,0.1,160);
    house(-90,0.1,120);
	house(-60,0.1,120);
    house(-90,0.1,160);
    house(-60,0.1,160);
    stand(-10,6,130);
    stand(30,6,130);
    //Right-Side Buildings
	apart(150,0,-150);
    apart(80,0,-90);
	apart(150,0,-90);
	apart(150,0,-30);
    //Left-Side Buildings
    apart(-150,0,-30);
    apart(-150,0,-110);
    apart(-150,0,-180);
}
void stand(float x,float y,float z)
{
	glColor3f(1,0.8,0);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x,y-h1,z+d1);
	glVertex3f(x+h,y-h1,z+d1);
	glVertex3f(x+h,y,z);
	glEnd();

	glColor3f(1,0.5,0);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x+h,y,z);
	glVertex3f(x+h,y-h1,z-d1);
	glVertex3f(x,y-h1,z-d1);
	glEnd();

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    /* draw the floor */
	glBegin(GL_QUADS);
	glColor3f(0.8,0.6,0.4);
	glVertex3f(-500.0, 0.0, -500.0);
    glColor3f(0.8,0.6,0.4);
    glVertex3f(-900.0, 0.0, 900.0);
    glColor3f(0.8,0.6,0.4);
    glVertex3f(500.0, 0.0, 500.0);
    glColor3f(0.8,0.6,0.4);
    glVertex3f(900.0, 0.0, -900.0);

	glEnd();
	glFlush();

    //Drawing Trees
    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,50);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-40);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,20);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-10);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-80);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-120);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-160);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,50);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,6);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-40);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,20);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-10);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-80);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-120);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-160);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    //Drawing Roads
	glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(0.0,0.01,-300); /* road */
	glVertex3f(0,0.01,300);
    glVertex3f(18,0.01,300);
    glVertex3f(18,0.01,-300);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(8.5,0.02,-300); /* road */
    glVertex3f(8.5,0.02,300);
    glVertex3f(9.5,0.02,300);
    glVertex3f(9.5,0.02,-300);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(44,0.01,-200); /* road */
    glVertex3f(44,0.01,160);
    glVertex3f(54,0.01,160);
    glVertex3f(54,0.01,-200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(54,0.01,-180); /* road */
    glVertex3f(54,0.01,-160);
    glVertex3f(200,0.01,-160);
    glVertex3f(200,0.01,-180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(18,0.01,160); /* road */
    glVertex3f(18,0.01,170);
    glVertex3f(200,0.01,170);
    glVertex3f(200,0.01,160);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-200,0.01,90); /* road */
    glVertex3f(-200,0.01,100);
    glVertex3f(0,0.01,100);
    glVertex3f(0,0.01,90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-90,0.01,-200); /* road */
    glVertex3f(-90,0.01,90);
    glVertex3f(-80,0.01,90);
    glVertex3f(-80,0.01,-200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(80,0.01,200); /* back road */
    glVertex3f(200,0.01,200);
    glVertex3f(500,0.01,200);
    glVertex3f(500,0.01,200);
    glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(500,0.01,300); /* front main road */
    glVertex3f(500,0.01,325);
    glVertex3f(-288,0.01,325);
    glVertex3f(-288,0.01,300);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(500,0.02,311); /* front main road white line */
    glVertex3f(500,0.02,313);
    glVertex3f(-288,0.02,313);
    glVertex3f(-288,0.02,311);
    glEnd();

	house1();
	glFlush();
	glutSwapBuffers();
}


void display_string(int x, int y, char *string, int font)
{
    int len,i;
	glColor3f(0.8,0.52,1.0);
	glRasterPos2f(x, y);
    len = (int) strlen(string);
    for (i = 0; i < len; i++) {
            if(font==1)
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
            if(font==2)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
            if(font==3)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
            if(font==4)
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);
	}
}

void welcomedDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);
    display_string(-130,200,"Indian Institute of Information Technology Dharwad",1);
	glColor3f(0, 0, 1);
	display_string(-80,170,"3D CITY ARCHITECTURE",1);
	display_string(-210, 130,"TEAM MEMBERS",1);
    display_string(-210,110,"Allu Hanuma Reddy—-20bcs008",2);
    display_string(-210,90,"Erigi Vaishnavi--20bcs044",2);
    display_string(-210,70,"Khushi G K—-20bcs071",2);
    display_string(-210,50,"Koukuntla Pranav–20bcs074",2);
	display_string(70,130,"KEYBOARD",1);
	display_string(70,110,"Q-Z-E-C KEYS FOR ROTATION",2);
	display_string(70,90,"A-D-S-W FOR CAMERA MOMENT",2);
	display_string(70,75,"A--To move left",3);
	display_string(70,60,"D--To move right",3);
	display_string(70,45,"S--To move backward",3);
	display_string(70,30,"A--To move farward",3);
	display_string(-180,-40,"ESCAPE TO EXIT",1);
	display_string(40,-40,"PRESS SPACE BAR TO ENTER",1);
    glutSwapBuffers();
}



void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'a':
	case 'A':
		glTranslatef(5.0, 0.0, 0.0);
		break;
	case 'd':
	case 'D':
		glTranslatef(-5.0, 0.0, 0.0);
		break;
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, 5.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -5.0);
		break;
	case 'q':
	case 'Q':
	    glRotatef(2,1.0,0.0,0.0);
	    break;
    case 'z':
    case 'Z':
        glRotatef(-2,1.0,0.0,0.0);
        break;
    case 'e':
    case 'E':
        glRotatef(2,0.0,1.0,0.0);
        break;
    case 'c':
    case 'C':
        glRotatef(-2,0.0,1.0,0.0);
        break;
	}
	display();
}

void resize(int width, int height)
{
	if (height == 0) height = 1;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    gluPerspective(80.0, width / height, 1.0, 600.0);
	glTranslatef(0.0, -15.0, -320.0);
	glMatrixMode(GL_MODELVIEW);
}

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE|GLUT_DEPTH);
	glutInitWindowSize(1100, 1100);
	glutInitWindowPosition(100, 10);
	glutCreateWindow("3D City Architecture");
	init();
	glutDisplayFunc(welcomedDisplay);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(resize);
	glutMainLoop();
	return 0;
}
