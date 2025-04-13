#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>
float p=100.0;
float s=80.0;
float a=40.0;
float d=100.0;
float f=40.0;
float k=60.0;
float m=80.0;
float n=100.0;
float l=160.0;
float g=40.0;
float h=10.0;
void init(void)
{
  glClearColor(0.0,1.0,1.0,1.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);


}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);

    for (int i = 0; i <= 100; i++) {
        float angle = 2 * 3.1416 * i / 100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);



//........................................End............................................
// snow road 01

    glColor3f(1, 1, 1);
    circle(63, 65, 80, 0);
    glColor3f(0, 0, 0);
    circle(61.5, 61.5, 80, 0);

    glColor3f(0, 0, 0);
    circle(60.5, 60.5, 80, 0);
    glColor3f(1, 1, 1);
    circle(59, 59, 80, 0);
    glColor3f(0, 0, 0);
    circle(58, 58, 80, 0);
    glColor3f(1, 1, 1);
    circle(57, 57, 80, 0);
    glColor3f(0, 1, 1);
    circle(47, 52, 80, 0);


   //........................................End............................................
// snow road 02

    glColor3f(1, 1, 1);
    circle(56.5, 60, -15, 20);
    glColor3f(0, 0, 0);
    circle(56.5, 56.5, -15, 20);

    glColor3f(0, 0, 0);
    circle(55.5, 55.5, -15, 20);
    glColor3f(1, 1, 1);
    circle(55, 55, -15, 20);
    glColor3f(0, 0, 0);
    circle(54, 54, -15, 20);
    glColor3f(1, 1, 1);
    circle(53, 53, -15, 20);
    glColor3f(0, 1, 1);
    circle(51, 51, -15, 20);

  glColor3f(0, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(100, 30);
   glVertex2i(100, 100);
   glVertex2i(-100, 100);
   glVertex2i(-100, -60);
   glEnd();

   //........................................End............................................
// snow road 04

    glColor3f(1, 1, 1);
    circle(72, 74, -60, 50);
    glColor3f(0, 0, 0);
    circle(71.5, 71.5, -60, 50);

    glColor3f(0, 0, 0);
    circle(70.5, 70.5, -60, 50);
    glColor3f(1, 1, 1);
    circle(70, 70, -60, 50);
    glColor3f(0, 0, 0);
    circle(69, 69, -60, 50);
    glColor3f(1, 1, 1);
    circle(68, 68, -60, 50);
    glColor3f(0, 1, 1);
    circle(64, 64, -60, 50);
    glColor3f(0, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(30, 50);
   glVertex2i(30, 100);
   glVertex2i(-20, 100);
   glVertex2i(-20, 50);
   glEnd();
   //........................................End............................................
// snow road 03

    glColor3f(1, 1, 1);
    circle(72, 74, -85, 85);
    glColor3f(0, 0, 0);
    circle(71.5, 71.5, -85, 85);

    glColor3f(0, 0, 0);
    circle(70.5, 70.5, -85, 85);
    glColor3f(1, 1, 1);
    circle(70, 70, -85, 85);
    glColor3f(0, 0, 0);
    circle(69, 69, -85, 85);
    glColor3f(1, 1, 1);
    circle(68, 68, -85, 85);
    glColor3f(0, 1, 1);
    circle(64, 64, -85, 85);
    glColor3f(0, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-10, 50);
   glVertex2i(-10, 100);
   glVertex2i(-100, 100);
   glVertex2i(-10, 50);
   glEnd();



//........................................End............................................

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, 55);
   glVertex2i(100, 55);
   glVertex2i(-10, 56);
   glVertex2i(-10, 54);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-10, 55);
   glVertex2i(-10, 55);
   glVertex2i(-100, 56);
   glVertex2i(-100, 54);
   glEnd();

//........................................End............................................
   // Winter Snow Mountain 01
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-20, -40);
   glVertex2i(-60, 4);
   glVertex2i(-68, -8);
   glVertex2i(-50, -20);
   glEnd();
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-20, -40);
   glVertex2i(-50, -26);
   glVertex2i(-68, -8);
   glVertex2i(-70, -30);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-48, -8);
   glVertex2i(-60, 4);
   glVertex2i(-60, 0);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-56, 0);
   glVertex2i(-60, 4);
   glVertex2i(-62, 0);
   glVertex2i(-56, -6);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-58, 0);
   glVertex2i(-60, 4);
   glVertex2i(-63, 0);
   glVertex2i(-60, -8);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-58, 0);
   glVertex2i(-60, 4);
   glVertex2i(-64, -2);
   glVertex2i(-64, -8);
   glEnd();


   // Winter Snow Mountain 02
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-40, -36);
   glVertex2i(-90, 10);
   glVertex2i(-100, -8);
   glVertex2i(-90, -10);
   glEnd();
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-40, -36);
   glVertex2i(-90, -16);
   glVertex2i(-100, -8);
   glVertex2i(-100, -30);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-74, -4);
   glVertex2i(-90, 10);
   glVertex2i(-90, 6);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-82, -4);
   glVertex2i(-84, 4);
   glVertex2i(-90, 4);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-90, 10);
   glVertex2i(-94, 4);
   glVertex2i(-92, -4);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-86, 4);
   glVertex2i(-90, 10);
   glVertex2i(-92, 2);
   glVertex2i(-87, -4);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-92, 8);
   glVertex2i(-96.5, -1);
   glVertex2i(-95, -6);
   glEnd();

    glColor3f(1, 1, 1);
    circle(10, 14, -100, -34);
    circle(10, 8, -90, -32);
    circle(13, 8, -78, -32);
    circle(10, 6, -62, -36);
    circle(13, 8, -49, -40);
    circle(12, 8, -30, -42);
    circle(8, 6, -16, -48);
    circle(16, 8, -16, -55);

//........................................End............................................

    glColor3f(0, 0, 0);
    circle(4, 4, 10, -70);

   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(100, -68);
   glVertex2i(0, -62);
   glVertex2i(-100, -55);
   glVertex2i(-100, -68);
   glEnd();

   //Telephone Booth Snow Winter
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-22, -65);
   glVertex2i(-26, -63);
   glVertex2i(-48, -63);
   glVertex2i(-52, -65);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-26, -65);
   glVertex2i(-26, -20);
   glVertex2i(-48, -20);
   glVertex2i(-48, -65);
   glEnd();
   glColor3f(0, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -61);
   glVertex2i(-30, -24);
   glVertex2i(-44, -24);
   glVertex2i(-44, -61);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-34, -61);
   glVertex2i(-34, -24);
   glVertex2i(-35, -24);
   glVertex2i(-35, -61);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-39, -61);
   glVertex2i(-39, -24);
   glVertex2i(-40, -24);
   glVertex2i(-40, -61);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -28);
   glVertex2i(-30, -29);
   glVertex2i(-44, -29);
   glVertex2i(-44, -28);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -33);
   glVertex2i(-30, -34);
   glVertex2i(-44, -34);
   glVertex2i(-44, -33);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -38);
   glVertex2i(-30, -39);
   glVertex2i(-44, -39);
   glVertex2i(-44, -38);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -43);
   glVertex2i(-30, -44);
   glVertex2i(-44, -44);
   glVertex2i(-44, -43);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -48);
   glVertex2i(-30, -49);
   glVertex2i(-44, -49);
   glVertex2i(-44, -48);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -53);
   glVertex2i(-30, -54);
   glVertex2i(-44, -54);
   glVertex2i(-44, -53);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -58);
   glVertex2i(-30, -59);
   glVertex2i(-44, -59);
   glVertex2i(-44, -58);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-24, -19);
   glVertex2i(-24, -17);
   glVertex2i(-50, -17);
   glVertex2i(-50, -19);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-28, -17);
   glVertex2i(-28, -14);
   glVertex2i(-46, -14);
   glVertex2i(-46, -17);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-28, -17);
   glVertex2i(-28, -14);
   glVertex2i(-26, -17);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-46, -17);
   glVertex2i(-46, -14);
   glVertex2i(-48, -17);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-28, -14);
   glVertex2i(-29, -13.5);
   glVertex2i(-45, -13.5);
   glVertex2i(-46, -14);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-24, -17);
   glVertex2i(-25, -16.5);
   glVertex2i(-49, -16.5);
   glVertex2i(-50, -17);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-26, -21);
   glVertex2i(-24, -19.5);
   glVertex2i(-50, -19.5);
   glVertex2i(-48, -21);
   glEnd();

//........................................End............................................
   //Snow road
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, -78);
   glVertex2i(100, -68);
   glVertex2i(-100, -68);
   glVertex2i(-100, -78);
   glEnd();

   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(90, -73);
   glVertex2i(90, -72);
   glVertex2i(80, -72);
   glVertex2i(80, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(70, -73);
   glVertex2i(70, -72);
   glVertex2i(60, -72);
   glVertex2i(60, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(50, -73);
   glVertex2i(50, -72);
   glVertex2i(40, -72);
   glVertex2i(40, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(30, -73);
   glVertex2i(30, -72);
   glVertex2i(20, -72);
   glVertex2i(20, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(10, -73);
   glVertex2i(10, -72);
   glVertex2i(0, -72);
   glVertex2i(0, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-10, -73);
   glVertex2i(-10, -72);
   glVertex2i(-20, -72);
   glVertex2i(-20, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -73);
   glVertex2i(-30, -72);
   glVertex2i(-40, -72);
   glVertex2i(-40, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-50, -73);
   glVertex2i(-50, -72);
   glVertex2i(-60, -72);
   glVertex2i(-60, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-70, -73);
   glVertex2i(-70, -72);
   glVertex2i(-80, -72);
   glVertex2i(-80, -73);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-90, -73);
   glVertex2i(-90, -72);
   glVertex2i(-100, -72);
   glVertex2i(-100, -73);
   glEnd();
//........................................End............................................
 //Snow road broder
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, -78);
   glVertex2i(100, -79);
   glVertex2i(-100, -79);
   glVertex2i(-100, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(100, -78);
   glVertex2i(100, -79);
   glVertex2i(95, -79);
   glVertex2i(95, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(90, -78);
   glVertex2i(90, -79);
   glVertex2i(85, -79);
   glVertex2i(85, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(80, -78);
   glVertex2i(80, -79);
   glVertex2i(75, -79);
   glVertex2i(75, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(70, -78);
   glVertex2i(70, -79);
   glVertex2i(65, -79);
   glVertex2i(65, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(60, -78);
   glVertex2i(60, -79);
   glVertex2i(55, -79);
   glVertex2i(55, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(50, -78);
   glVertex2i(50, -79);
   glVertex2i(45, -79);
   glVertex2i(45, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(40, -78);
   glVertex2i(40, -79);
   glVertex2i(35, -79);
   glVertex2i(35, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(30, -78);
   glVertex2i(30, -79);
   glVertex2i(25, -79);
   glVertex2i(25, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(20, -78);
   glVertex2i(20, -79);
   glVertex2i(15, -79);
   glVertex2i(15, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(10, -78);
   glVertex2i(10, -79);
   glVertex2i(5, -79);
   glVertex2i(5, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(0, -78);
   glVertex2i(0, -79);
   glVertex2i(-5, -79);
   glVertex2i(-5, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-10, -78);
   glVertex2i(-10, -79);
   glVertex2i(-15, -79);
   glVertex2i(-15, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-20, -78);
   glVertex2i(-20, -79);
   glVertex2i(-25, -79);
   glVertex2i(-25, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -78);
   glVertex2i(-30, -79);
   glVertex2i(-35, -79);
   glVertex2i(-35, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-40, -78);
   glVertex2i(-40, -79);
   glVertex2i(-45, -79);
   glVertex2i(-45, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-50, -78);
   glVertex2i(-50, -79);
   glVertex2i(-55, -79);
   glVertex2i(-55, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-60, -78);
   glVertex2i(-60, -79);
   glVertex2i(-65, -79);
   glVertex2i(-65, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-70, -78);
   glVertex2i(-70, -79);
   glVertex2i(-75, -79);
   glVertex2i(-75, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-80, -78);
   glVertex2i(-80, -79);
   glVertex2i(-85, -79);
   glVertex2i(-85, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-90, -78);
   glVertex2i(-90, -79);
   glVertex2i(-95, -79);
   glVertex2i(-95, -78);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-100, -78);
   glVertex2i(-100, -79);
   glVertex2i(-110, -79);
   glVertex2i(-110, -78);
   glEnd();

   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, -68);
   glVertex2i(100, -67);
   glVertex2i(-100, -67);
   glVertex2i(-100, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(100, -68);
   glVertex2i(100, -67);
   glVertex2i(95, -67);
   glVertex2i(95, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(90, -68);
   glVertex2i(90, -67);
   glVertex2i(85, -67);
   glVertex2i(85, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(80, -68);
   glVertex2i(80, -67);
   glVertex2i(75, -67);
   glVertex2i(75, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(70, -68);
   glVertex2i(70, -67);
   glVertex2i(65, -67);
   glVertex2i(65, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(60, -68);
   glVertex2i(60, -67);
   glVertex2i(55, -67);
   glVertex2i(55, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(50, -68);
   glVertex2i(50, -67);
   glVertex2i(45, -67);
   glVertex2i(45, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(40, -68);
   glVertex2i(40, -67);
   glVertex2i(35, -67);
   glVertex2i(35, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(30, -68);
   glVertex2i(30, -67);
   glVertex2i(25, -67);
   glVertex2i(25, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(20, -68);
   glVertex2i(20, -67);
   glVertex2i(15, -67);
   glVertex2i(15, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(10, -68);
   glVertex2i(10, -67);
   glVertex2i(5, -67);
   glVertex2i(5, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(0, -68);
   glVertex2i(0, -67);
   glVertex2i(-5, -67);
   glVertex2i(-5, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-10, -68);
   glVertex2i(-10, -67);
   glVertex2i(-15, -67);
   glVertex2i(-15, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-20, -68);
   glVertex2i(-20, -67);
   glVertex2i(-25, -67);
   glVertex2i(-25, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -68);
   glVertex2i(-30, -67);
   glVertex2i(-35, -67);
   glVertex2i(-35, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-40, -68);
   glVertex2i(-40, -67);
   glVertex2i(-45, -67);
   glVertex2i(-45, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-50, -68);
   glVertex2i(-50, -67);
   glVertex2i(-55, -67);
   glVertex2i(-55, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-60, -68);
   glVertex2i(-60, -67);
   glVertex2i(-65, -67);
   glVertex2i(-65, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-70, -68);
   glVertex2i(-70, -67);
   glVertex2i(-75, -67);
   glVertex2i(-75, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-80, -68);
   glVertex2i(-80, -67);
   glVertex2i(-85, -67);
   glVertex2i(-85, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-90, -68);
   glVertex2i(-90, -67);
   glVertex2i(-95, -67);
   glVertex2i(-95, -68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-100, -68);
   glVertex2i(-100, -67);
   glVertex2i(-105, -67);
   glVertex2i(-105, -68);
   glEnd();




//........................................End............................................

   //Snow Lamp Post 01
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-12, -66);
   glVertex2i(-14, -64);
   glVertex2i(-16, -64);
   glVertex2i(-18, -66);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-14, -64);
   glVertex2i(-14, -32);
   glVertex2i(-16, -32);
   glVertex2i(-16, -64);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-12, -32);
   glVertex2i(-10, -22);
   glVertex2i(-20, -22);
   glVertex2i(-18, -32);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-10, -22);
   glVertex2i(-15, -17);
   glVertex2i(-20, -22);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-13, -31);
   glVertex2i(-11, -22);
   glVertex2i(-19, -22);
   glVertex2i(-17, -31);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-15, -31);
   glVertex2i(-15, -22);
   glVertex2i(-16, -22);
   glVertex2i(-16, -31);
   glEnd();
//........................................End............................................

   //Snow Lamp Post 03
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(52, -66);
   glVertex2i(50, -64);
   glVertex2i(48, -64);
   glVertex2i(46, -66);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(50, -64);
   glVertex2i(50, -32);
   glVertex2i(48, -32);
   glVertex2i(48, -64);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(52, -32);
   glVertex2i(54, -22);
   glVertex2i(44, -22);
   glVertex2i(46, -32);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(54, -22);
   glVertex2i(49, -17);
   glVertex2i(44, -22);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(51, -31);
   glVertex2i(53, -22);
   glVertex2i(45, -22);
   glVertex2i(47, -31);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(49, -31);
   glVertex2i(49, -22);
   glVertex2i(48, -22);
   glVertex2i(48, -31);
   glEnd();


   //........................................End............................................


   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-2, -64);
   glVertex2i(-2, -44);
   glVertex2i(-3, -44);
   glVertex2i(-3, -64);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(37, -64);
   glVertex2i(37, -44);
   glVertex2i(36, -44);
   glVertex2i(36, -64);
   glEnd();

   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(39, -44);
   glVertex2i(39, -43);
   glVertex2i(-5, -43);
   glVertex2i(-5, -44);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(39, -46);
   glVertex2i(39, -44);
   glVertex2i(-5, -44);
   glVertex2i(-5, -46);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(39, -46.8);
   glVertex2i(39, -47);
   glVertex2i(-5, -47);
   glVertex2i(-5, -46.8);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(39, -49);
   glVertex2i(39, -47);
   glVertex2i(-5, -47);
   glVertex2i(-5, -49);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(39, -49.8);
   glVertex2i(39, -50);
   glVertex2i(-5, -50);
   glVertex2i(-5, -49.8);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(39, -52);
   glVertex2i(39, -50);
   glVertex2i(-5, -50);
   glVertex2i(-5, -52);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-2, -54);
   glVertex2i(-4, -54);
   glVertex2i(-7, -58);
   glVertex2i(-5, -58);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-5, -66);
   glVertex2i(-5, -58);
   glVertex2i(-7, -58);
   glVertex2i(-7, -66);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(37, -54);
   glVertex2i(35, -54);
   glVertex2i(40, -58);
   glVertex2i(42, -58);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(42, -66);
   glVertex2i(42, -58);
   glVertex2i(40, -58);
   glVertex2i(40, -66);
   glEnd();

   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(42, -58);
   glVertex2i(37, -54);
   glVertex2i(-4, -54);
   glVertex2i(-8, -58);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(42, -60);
   glVertex2i(42, -58);
   glVertex2i(-8, -58);
   glVertex2i(-8, -60);
   glEnd();











//........................................End............................................

   //Snow Tesla car

   glutPostRedisplay();

   glColor3f(1,0,0);
   glBegin(GL_QUADS);
   glVertex2f(p+16,-57);
   glVertex2f(p+38,-64);
   glVertex2f(p+40,-66);
   glVertex2f(p,-64);
   glEnd();
   glColor3f(0,0,0);
   glBegin(GL_QUADS);
   glVertex2f(p,-68);
   glVertex2f(p+3,-64);
   glVertex2f(p+16,-58);
   glVertex2f(p+16,-68);
   glEnd();
   glColor3f(0,0,0);
   glBegin(GL_QUADS);
   glVertex2f(p+17,-58);
   glVertex2f(p+35,-64);
   glVertex2f(p+35,-68);
   glVertex2f(p+17,-68);
   glEnd();
   glColor3f(1,0,0);
   glBegin(GL_QUADS);
   glVertex2f(p,-64);
   glVertex2f(p+40,-64);
   glVertex2f(p+40,-70);
   glVertex2f(p+1,-70);

   glColor3f(0,0,0);
   glBegin(GL_QUADS);
   glVertex2f(p,-66);
   glVertex2f(p+40,-66);
   glVertex2f(p+40,-67);
   glVertex2f(p,-67);
   glEnd();

   glColor3f(0,0,0);
   glBegin(GL_QUADS);
   glVertex2f(p,-64.5);
   glVertex2f(p+40,-64.5);
   glVertex2f(p+40,-65.5);
   glVertex2f(p,-65.5);
   glEnd();

   glColor3f(1,1,0);
   glBegin(GL_QUADS);
   glVertex2f(p+39,-66);
   glVertex2f(p+40,-66);
   glVertex2f(p+40,-68);
   glVertex2f(p+39,-68);
   glEnd();

   glColor3f(1,1,0);
   glBegin(GL_QUADS);
   glVertex2f(p+39,-66);
   glVertex2f(p+60,-70);
   glVertex2f(p+55,-72);
   glVertex2f(p+39,-68);
   glEnd();


    glColor3f(0, 0, 0);
    circle(4, 4, p+8, -70);
    circle(4, 4, p+32, -70);
    glColor3f(1, 1, 1);
    circle(3.5, 3.5, p+8, -70);
    circle(3.5, 3.5, p+32, -70);
    glColor3f(0, 0, 0);
    circle(3, 3, p+8, -70);
    circle(3, 3, p+32, -70);
    glColor3f(1, 1, 1);
    circle(0.5, 0.5, p+8, -70);
    circle(0.5, 0.5, p+32, -70);
//........................................End............................................

glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(90, -95);
   glVertex2i(80, -80);
   glVertex2i(-40, -78);
   glVertex2i(-40, -100);
   glEnd();



//........................................End............................................

   //Snow Lamp Post 02
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(22, -82);
   glVertex2i(20, -80);
   glVertex2i(18, -80);
   glVertex2i(16, -82);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(20, -80);
   glVertex2i(20, -38);
   glVertex2i(18, -38);
   glVertex2i(18, -80);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(22, -38);
   glVertex2i(24, -28);
   glVertex2i(14, -28);
   glVertex2i(16, -38);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(24, -28);
   glVertex2i(19, -23);
   glVertex2i(14, -28);
   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(21, -37);
   glVertex2i(23, -28);
   glVertex2i(15, -28);
   glVertex2i(17, -37);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(19, -38);
   glVertex2i(19, -28);
   glVertex2i(18, -28);
   glVertex2i(18, -38);
   glEnd();
   //........................................End............................................

    //Snow Doll Stock
    glColor3f(0, 0, 0);
    circle(10.5, 10.5, -70, -74);
    circle(9.5, 9.5, -70, -60);
    circle(8.5, 8.5, -70, -46);
    glColor3f(1, 1, 1);
    circle(10, 10, -70, -74);
    circle(9, 9, -70, -60);
    circle(8, 8, -70, -46);
    glColor3f(0, 0, 0);
    circle(1, 1, -70, -60);
    circle(1, 1, -70, -56);
    circle(12, 2, -70, -42);
    circle(1, 1, -73, -46);
    circle(1, 1, -67, -46);
    glColor3f(1, 1, 0);
    circle(2, 2, -70, -48);

   //Snow Doll cap
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-63, -42);
   glVertex2i(-62, -30);
   glVertex2i(-78, -30);
   glVertex2i(-77, -42);
   glEnd();

   //Snow Doll right hand
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-46, -48);
   glVertex2i(-44, -46);
   glVertex2i(-63, -56);
   glVertex2i(-62, -58);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-38, -49);
   glVertex2i(-48, -48);
   glVertex2i(-50, -50);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-52, -52);
   glVertex2i(-50, -46);
   glVertex2i(-54, -52);
   glEnd();

   //Snow Doll left hand
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-78, -58);
   glVertex2i(-86, -50);
   glVertex2i(-86, -52);
   glVertex2i(-79, -60);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-86, -50);
   glVertex2i(-92, -44);
   glVertex2i(-90, -49);
   glVertex2i(-86, -52);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-92, -48);
   glVertex2i(-96, -43);
   glVertex2i(-94, -48);
   glVertex2i(-90, -50);
   glVertex2i(-86, -49);
   glVertex2i(-92, -48);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-82, -56);
   glVertex2i(-84, -54);
   glVertex2i(-94, -54);
   glEnd();
    //........................................End............................................
 //Snow Single House
// Snow Tree 01
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(62, 0);
   glVertex2i(61, 20);
   glVertex2i(60, 0);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(67, 2);
   glVertex2i(61, 10);
   glVertex2i(55, 2);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(67, 7);
   glVertex2i(61, 15);
   glVertex2i(55, 7);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(66, 12);
   glVertex2i(61, 20);
   glVertex2i(56, 12);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(64, 17);
   glVertex2i(61, 25);
   glVertex2i(58, 17);
   glEnd();

   // Snow Tree 03
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(78, 2);
   glVertex2i(77, 22);
   glVertex2i(76, 2);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(82, 4);
   glVertex2i(77, 12);
   glVertex2i(71, 4);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(82, 9);
   glVertex2i(77, 17);
   glVertex2i(71, 9);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(81, 14);
   glVertex2i(77, 22);
   glVertex2i(72, 14);
   glEnd();

   // Snow Tree 04
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(90, -2);
   glVertex2i(89, 20);
   glVertex2i(88, -2);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(95, 0);
   glVertex2i(89, 8);
   glVertex2i(83, 0);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(95, 5);
   glVertex2i(89, 13);
   glVertex2i(83, 5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(94, 10);
   glVertex2i(89, 18);
   glVertex2i(84, 10);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(93, 15);
   glVertex2i(89, 25);
   glVertex2i(85, 15);
   glEnd();

   // Snow Tree 05
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(26, 2);
   glVertex2i(25, 22);
   glVertex2i(24, 2);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(31, 4);
   glVertex2i(25, 12);
   glVertex2i(19, 4);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(30, 10);
   glVertex2i(25, 18);
   glVertex2i(20, 10);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(29, 15);
   glVertex2i(25, 25);
   glVertex2i(21, 15);
   glEnd();

   // Snow Tree 06
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(14, -2);
   glVertex2i(13, 20);
   glVertex2i(12, -2);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(19, 0);
   glVertex2i(13, 8);
   glVertex2i(7, 0);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(19, 5);
   glVertex2i(13, 14);
   glVertex2i(7, 5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(18, 10);
   glVertex2i(13, 19);
   glVertex2i(8, 10);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(17, 15);
   glVertex2i(13, 26);
   glVertex2i(9, 15);
   glEnd();

   //Snow Single House
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(39, 20);
   glVertex2i(54, 20);
   glVertex2i(60, 12);
   glVertex2i(45, 12);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(40, 20);
   glVertex2i(39, 20);
   glVertex2i(30, 10);
   glVertex2i(30, 11);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(44, 12);
   glVertex2i(44, 14);
   glVertex2i(39, 19);
   glVertex2i(31, 11);
   glEnd();
   glColor3f(1, 1, 0);
   circle(2, 2, 38.5, 14.5);
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(39.8, 12);
   glVertex2i(39.8, 18);
   glVertex2i(38.8, 18);
   glVertex2i(38.8, 12);
   glEnd();
   glBegin(GL_POLYGON);
   glVertex2i(41, 14.5);
   glVertex2i(41, 15.5);
   glVertex2i(36, 15.5);
   glVertex2i(36, 14.5);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(44, 0);
   glVertex2i(44, 12);
   glVertex2i(32, 12);
   glVertex2i(32, 0);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(58, 0);
   glVertex2i(58, 12);
   glVertex2i(44, 12);
   glVertex2i(44, 0);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(45, 0);
   glVertex2i(45, 12);
   glVertex2i(44.8, 12);
   glVertex2i(44.8, 0);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(36, 1);
   glVertex2i(36, 10);
   glVertex2i(33, 10);
   glVertex2i(33, 1);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(43, 1);
   glVertex2i(43, 11);
   glVertex2i(37.5, 11);
   glVertex2i(37.5, 1);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(52, 16);
   glVertex2i(52, 22);
   glVertex2i(50, 22);
   glVertex2i(50, 18);
   glEnd();

   //Window 01
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(41, 1);
   glVertex2i(41, 11);
   glVertex2i(40, 11);
   glVertex2i(40, 1);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(43, 7);
   glVertex2i(43, 8);
   glVertex2i(36, 8);
   glVertex2i(36, 7);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(43, 4);
   glVertex2i(43, 5);
   glVertex2i(36, 5);
   glVertex2i(36, 4);
   glEnd();

   //Window 02
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(51, 2);
   glVertex2i(51, 10);
   glVertex2i(46, 10);
   glVertex2i(46, 2);
   glEnd();

   //Window 03
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(57, 2);
   glVertex2i(57, 10);
   glVertex2i(52, 10);
   glVertex2i(52, 2);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(57, 7);
   glVertex2i(57, 8);
   glVertex2i(46, 8);
   glVertex2i(46, 7);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(57, 4);
   glVertex2i(57, 5);
   glVertex2i(46, 5);
   glVertex2i(46, 4);
   glEnd();

//........................................End............................................

    glColor3f(1, 1, 1);
    circle(10, 6, 10, -8);
    circle(14, 6, 10, -14);
    circle(10, 6, 20, -8);
    circle(10, 6, 24, -4);

    circle(8, 6, 40, -4);
    circle(8, 6, 50, -4);
    circle(10, 8, 52, -8);
    circle(6, 5, 62, -4);
    circle(8, 6, 62, -8);

    circle(8, 6, 76, -8);
    circle(8, 4, 80, -1);
    circle(18, 12, 80, -12);
    circle(12, 8, 90, -12);
    circle(12, 12, 80, -20);
    circle(12, 8, 60, -12);

// Snow Tree 02
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(70, -6);
   glVertex2i(69, 14);
   glVertex2i(68, -6);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(75, -4);
   glVertex2i(69, 4);
   glVertex2i(63, -4);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(75, 1);
   glVertex2i(69, 9);
   glVertex2i(63, 1);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(74, 6);
   glVertex2i(69, 14);
   glVertex2i(64, 6);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(73, 11);
   glVertex2i(69, 20);
   glVertex2i(65, 11);
   glEnd();
//........................................End............................................
 //Snow Multiple House
 //Snow Tree 01
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-74, 50);
   glVertex2i(-75, 74);
   glVertex2i(-76, 50);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-80, 52);
   glVertex2i(-75, 60);
   glVertex2i(-70, 52);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-81, 57);
   glVertex2i(-75, 64);
   glVertex2i(-69, 57);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-80, 61);
   glVertex2i(-75, 70);
   glVertex2i(-70, 61);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-79, 66);
   glVertex2i(-75, 74);
   glVertex2i(-71, 66);
   glEnd();

   //Snow Tree 02
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-90, 40);
   glVertex2i(-91, 68);
   glVertex2i(-92, 40);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-97, 42);
   glVertex2i(-91, 50);
   glVertex2i(-85, 42);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-97, 47);
   glVertex2i(-91, 56);
   glVertex2i(-85, 47);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-96, 52);
   glVertex2i(-91, 62);
   glVertex2i(-86, 52);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-95, 57);
   glVertex2i(-91, 70);
   glVertex2i(-87, 57);
   glEnd();


   //........................................End............................................

    glColor3f(1, 1, 1);
    circle(10, 6, -30, 58);



 //Snow House 01
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-45, 50);
   glVertex2i(-45, 62);
   glVertex2i(-69, 62);
   glVertex2i(-69, 50);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-40, 70);
   glVertex2i(-64, 70);
   glVertex2i(-70, 61);
   glVertex2i(-46, 61);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-32, 62);
   glVertex2i(-40, 70);
   glVertex2i(-40, 69);
   glVertex2i(-32, 61);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-34, 54);
   glVertex2i(-34, 64);
   glVertex2i(-46, 62);
   glVertex2i(-46, 50);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-32, 62);
   glVertex2i(-40, 69);
   glVertex2i(-46, 62);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-45, 50);
   glVertex2i(-46, 62);
   glVertex2i(-47, 62);
   glVertex2i(-46, 50);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-36, 56);
   glVertex2i(-36, 62);
   glVertex2i(-44, 60);
   glVertex2i(-43, 54);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-48, 52);
   glVertex2i(-48, 59);
   glVertex2i(-56, 59);
   glVertex2i(-56, 52);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-58, 52);
   glVertex2i(-58, 59);
   glVertex2i(-68, 59);
   glVertex2i(-68, 52);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-56, 68);
   glVertex2i(-56, 72);
   glVertex2i(-58, 72);
   glVertex2i(-58, 66);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-60, 68);
   glVertex2i(-60, 72);
   glVertex2i(-62, 72);
   glVertex2i(-62, 66);
   glEnd();


   //........................................End............................................

    glColor3f(1, 1, 1);
    circle(8, 6, -54, 48);
    circle(8, 5, -46, 48);
    circle(8, 6, -40, 48);
    circle(8, 5, -32, 52);





 //Snow House 02
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-60, 34);
   glVertex2i(-60, 46);
   glVertex2i(-83, 46);
   glVertex2i(-83, 34);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-60, 46);
   glVertex2i(-56, 56);
   glVertex2i(-80, 56);
   glVertex2i(-84, 46);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-49, 47);
   glVertex2i(-56, 56);
   glVertex2i(-56, 55);
   glVertex2i(-49, 46);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-51, 38);
   glVertex2i(-51, 47);
   glVertex2i(-60, 46);
   glVertex2i(-60, 34);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-50, 47);
   glVertex2i(-56, 55);
   glVertex2i(-60, 46);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-59, 34);
   glVertex2i(-59, 46);
   glVertex2i(-60, 46);
   glVertex2i(-60, 34);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-52, 40);
   glVertex2i(-52, 47);
   glVertex2i(-58, 45);
   glVertex2i(-58, 37);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-62, 37);
   glVertex2i(-62, 44);
   glVertex2i(-70, 44);
   glVertex2i(-70, 37);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-74, 37);
   glVertex2i(-74, 44);
   glVertex2i(-82, 44);
   glVertex2i(-82, 37);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-76, 54);
   glVertex2i(-76, 58);
   glVertex2i(-78, 58);
   glVertex2i(-78, 52);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-72, 54);
   glVertex2i(-72, 58);
   glVertex2i(-74, 58);
   glVertex2i(-74, 52);
   glEnd();


//........................................End............................................

    glColor3f(1, 1, 1);
    circle(8, 5, -60, 32);
    circle(8, 7, -68, 32);
    circle(8, 6, -76, 32);
    circle(8, 8, -85, 32);
    circle(10, 9, -97, 32);
    circle(9,7, -42, 40);
    circle(9,5, -50, 36);

//........................................End............................................

   glColor3f(1, 1, 1);
   circle(10, 8, 80, -92);
   circle(14, 10, 55, -88);
   circle(14, 10, 90, -88);

   glColor3f(0, 0, 0);
   circle(10, 8, 80, -92);
   circle(8, 10, 60, -92);
   circle(14, 10, 70, -88);



   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(100, -100);
   glVertex2i(-40, -79);
   glVertex2i(-100, -79);
   glVertex2i(-100, -100);
   glEnd();

  // 1st Snow Tree
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(86, -92);
   glVertex2i(85, -40);
   glVertex2i(81, -40);
   glVertex2i(80, -92);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, -40);
   glVertex2i(98, -40);
   glVertex2i(84, -59);
   glVertex2i(84, -64);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(94, -48);
   glVertex2i(94, -40);
   glVertex2i(92, -40);
   glVertex2i(92, -49);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(82, -70);
   glVertex2i(64, -50);
   glVertex2i(66, -54);
   glVertex2i(83, -74);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(72, -60);
   glVertex2i(72, -48);
   glVertex2i(70, -48);
   glVertex2i(70, -58);
   glEnd();

    glColor3f(0, 1, 0);
    circle(12, 10, 70, -40);
    circle(12, 10, 70, -32);
    circle(12, 10, 80, -28);
    circle(12, 10, 80, -36);
    circle(12, 10, 90, -32);
    circle(12, 10, 98, -34);
    circle(12, 8, 60, -45);
    circle(8, 10, 60, -45);

    glColor3f(0, 0, 0);
circle(12.5, 8.5, 70, -30);
circle(12.5, 8.5, 80, -24);
circle(12.5, 8.5, 90, -28);
circle(6.5, 6.5, 53, -45);
circle(6.5, 8.5, 60, -40);
    glColor3f(1, 1, 1);
circle(12, 8, 70, -30);
circle(12, 8, 80, -24);
circle(12, 8, 90, -28);
circle(6, 6, 53, -45);
circle(6, 8, 60, -40);
glColor3f(1, 1, 1);
circle(12.5, 8.5, 70, -31);
circle(12.5, 8.5, 80, -25);
circle(12.5, 8.5, 90, -29);
circle(6.5, 6.5, 53, -46);
circle(6.5, 8.5, 60, -41);
//........................................End............................................

    glColor3f(0, 1, 0);
    circle(4, 4, 80, -90);

    glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(80, -90);
   glVertex2i(78, -80);
   glVertex2i(76, -90);
   glEnd();
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(84, -90);
   glVertex2i(82, -80);
   glVertex2i(80, -90);
   glEnd();
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(84, -90);
   glVertex2i(72, -85);
   glVertex2i(80, -95);
   glEnd();

   glColor3f(1, 1, 1);
   circle(4, 4, 80, -92);

   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(80, -91);
   glVertex2i(78, -86);
   glVertex2i(76, -91);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(84, -91);
   glVertex2i(82, -86);
   glVertex2i(80, -91);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(84, -90);
   glVertex2i(76, -88);
   glVertex2i(80, -95);
   glEnd();


 glColor3f(1, 1, 1);
   circle(10, 6, 90, -96);
    glColor3f(0, 0, 0);
   circle(14, 8, 65, -96);

//........................................End............................................

// snow sun

   glColor3f(1, 1, 0);
   circle(8, 8, -80, 88);

   glColor3f(1, 1, 1);
   circle(6, 2, a+16, 86);
   circle(5, 3, a+10, 88);
   circle(4, 4, a+6, 90);
   circle(3, 3, a+4, 92);
   circle(4, 4, a, 90);
   circle(2, 2, a-4, 88);
   circle(6, 2, a-4, 86);
   circle(3, 3, a+2, 86);
   circle(4, 4, a+8, 84);


   glColor3f(1, 1, 1);
   circle(3, 3, s+12, 80);
   circle(4, 4, s+8, 82);
   circle(3, 3, s+4, 84);
   circle(3, 3, s, 82);
   circle(3, 3, s-4, 80);
   circle(4, 4, s+2, 78);
   circle(3, 3, s+8, 78);

//........................................End............................................

// Snow Plen
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(d-6, 89);
   glVertex2i(d-8, 91);
   glVertex2i(d-10, 90);
   glEnd();

   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(d, 92);
   glVertex2i(d-6, 92);
   glVertex2i(d-9, 91);
   glVertex2i(d-10, 90);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(d+10,90);
   glVertex2i(d+10, 92);
   glVertex2i(d-6, 92);
   glVertex2i(d-8, 89);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(d+12,94);
   glVertex2i(d+10, 94);
   glVertex2i(d+6, 90);
   glVertex2i(d+12, 96);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(d+10,89);
   glVertex2i(d+10, 94);
   glVertex2i(d+6, 90);
   glVertex2i(d+8, 90);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(d+2,89);
   glVertex2i(d+4, 94);
   glVertex2i(d, 90);
   glVertex2i(d+2, 90);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(d+10,90);
   glVertex2i(d+14, 90);
   glVertex2i(d+6, 90);
   glVertex2i(d+14, 94);
   glEnd();

//........................................End............................................
   // Snow Mountens 01
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(50,30);
   glVertex2i(20, 65);
   glVertex2i(-10, 30);
   glEnd();
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(50,30);
   glVertex2i(12, 56);
   glVertex2i(-10, 30);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(28,56);
   glVertex2i(20, 68);
   glVertex2i(20, 62);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(22,54);
   glVertex2i(20, 68);
   glVertex2i(17, 64);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(22,62);
   glVertex2i(20, 68);
   glVertex2i(16, 56);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(22,62);
   glVertex2i(20, 68);
   glVertex2i(12, 56);
   glEnd();

   // Snow Mountens 02
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(30,30);
   glVertex2i(0, 75);
   glVertex2i(-30, 30);
   glEnd();
   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(30,30);
   glVertex2i(-14, 56);
   glVertex2i(-30, 30);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(10,60);
   glVertex2i(0, 76);
   glVertex2i(0, 68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(6,56);
   glVertex2i(0, 76);
   glVertex2i(-4, 68);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(2,66);
   glVertex2i(0, 76);
   glVertex2i(-2, 58);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(2,68);
   glVertex2i(-6, 68);
   glVertex2i(-8, 58);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(0,76);
   glVertex2i(-6, 68);
   glVertex2i(0, 66);
   glEnd();

   glColor3f(1, 1, 1);
   circle(10, 10, -25, 20);
   circle(8, 10, -25, 30);
   circle(14, 8, -15, 35);
   circle(12, 10, -8, 30);
   circle(12, 8, 8, 30);
   circle(14, 6, 20, 30);
   circle(12, 8, 34, 30);
   circle(14, 6, 50, 30);

   //........................................End............................................
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(100, 38);
   glVertex2i(100, 39);
   glVertex2i(2, 24);
   glVertex2i(2, 23);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, 37);
   glVertex2i(100, 38);
   glVertex2i(2, 23);
   glVertex2i(2, 22);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(100, 36);
   glVertex2i(100, 37);
   glVertex2i(3, 22);
   glVertex2i(3, 21);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, 35);
   glVertex2i(100, 36);
   glVertex2i(4, 21);
   glVertex2i(4, 20);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(100, 34);
   glVertex2i(100, 35);
   glVertex2i(5, 20);
   glVertex2i(5, 18);
   glEnd();


//........................................End............................................
// tree 01
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(40, 46);
   glVertex2i(39, 54);
   glVertex2i(38, 46);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(42, 48);
   glVertex2i(39, 56);
   glVertex2i(36, 48);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(42, 52);
   glVertex2i(39, 60);
   glVertex2i(36, 52);
   glEnd();

   // tree 02
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(50, 44);
   glVertex2i(49, 52);
   glVertex2i(48, 44);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(52, 46);
   glVertex2i(49, 54);
   glVertex2i(46, 46);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(52, 50);
   glVertex2i(49, 58);
   glVertex2i(46, 50);
   glEnd();

// Tree 03
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(60, 46);
   glVertex2i(59, 54);
   glVertex2i(58, 46);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(62, 48);
   glVertex2i(59, 60);
   glVertex2i(56, 48);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(70, 44);
   glVertex2i(69, 52);
   glVertex2i(68, 44);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(72, 46);
   glVertex2i(69, 58);
   glVertex2i(66, 46);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(80, 46);
   glVertex2i(79, 54);
   glVertex2i(78, 46);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(82, 48);
   glVertex2i(79, 60);
   glVertex2i(76, 48);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(90, 44);
   glVertex2i(89, 52);
   glVertex2i(88, 44);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(92, 46);
   glVertex2i(89, 58);
   glVertex2i(86, 46);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, 46);
   glVertex2i(99, 54);
   glVertex2i(98, 46);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(102, 48);
   glVertex2i(99, 56);
   glVertex2i(96, 48);
   glEnd();


//........................................End............................................
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-40, -10);
   glVertex2i(-41, 4);
   glVertex2i(-42, -10);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-37, -8);
   glVertex2i(-41, 0);
   glVertex2i(-45, -8);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-37, -4);
   glVertex2i(-41, 6);
   glVertex2i(-45, -4);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-30, -6);
   glVertex2i(-31, 8);
   glVertex2i(-32, -6);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-28, -4);
   glVertex2i(-31, 2);
   glVertex2i(-34, -4);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-28, 0);
   glVertex2i(-31, 10);
   glVertex2i(-34, 0);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-20, 1);
   glVertex2i(-21, 15);
   glVertex2i(-22, 1);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-16, 3);
   glVertex2i(-21, 11);
   glVertex2i(-26, 3);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-17, 8);
   glVertex2i(-21, 16);
   glVertex2i(-25, 8);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-11, 11);
   glVertex2i(-12, 25);
   glVertex2i(-13, 11);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-8, 13);
   glVertex2i(-12, 19);
   glVertex2i(-16, 13);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-8, 16);
   glVertex2i(-12, 28);
   glVertex2i(-16, 16);
   glEnd();
//........................................End............................................
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-70, 0);
   glVertex2i(-71, 14);
   glVertex2i(-72, 0);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-67, 2);
   glVertex2i(-71, 12);
   glVertex2i(-75, 2);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-67, 7);
   glVertex2i(-71, 15);
   glVertex2i(-75, 7);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-56, 10);
   glVertex2i(-57, 24);
   glVertex2i(-58, 10);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-52, 12);
   glVertex2i(-57, 20);
   glVertex2i(-62, 12);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-52, 17);
   glVertex2i(-57, 25);
   glVertex2i(-62, 17);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-40, 20);
   glVertex2i(-41, 34);
   glVertex2i(-42, 20);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-36, 22);
   glVertex2i(-41, 30);
   glVertex2i(-46, 22);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-36, 27);
   glVertex2i(-41, 35);
   glVertex2i(-46, 27);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-48, 0);
   glVertex2i(-49, 17);
   glVertex2i(-50, 0);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-45, 2);
   glVertex2i(-49, 12);
   glVertex2i(-53, 2);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-45, 7);
   glVertex2i(-49, 17);
   glVertex2i(-53, 7);
   glEnd();

   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-38, 8);
   glVertex2i(-39, 25);
   glVertex2i(-40, 8);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-35, 10);
   glVertex2i(-39, 20);
   glVertex2i(-43, 10);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-35, 15);
   glVertex2i(-39, 25);
   glVertex2i(-43, 15);
   glEnd();

//........................................End............................................
  glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, -94.5);
   glVertex2i(100, -94.5);
   glVertex2i(-100, -95.5);
   glVertex2i(-100, -94.5);
   glEnd();
    glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(100, -96);
   glVertex2i(100, -95);
   glVertex2i(-100, -96);
   glVertex2i(-100, -96);
   glEnd();
//........................................End............................................
// boat penguins
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k+4, -95);
   glVertex2i(k+4, -92);
   glVertex2i(k+8, -95);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k, -95);
   glVertex2i(k+4, -92);
   glVertex2i(k+4, -95);
   glEnd();

// 02 penguins
   glutPostRedisplay();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k-4, -75);
   glVertex2i(k-8, -77);
   glVertex2i(k-4, -78);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k+2, -76);
   glVertex2i(k-4.5, -78);
   glVertex2i(k-0.5, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(k+2, -76);
   glVertex2i(k-4, -78);
   glVertex2i(k, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k+8, -86);
   glVertex2i(k+3, -74);
   glVertex2i(k, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k+16, -90);
   glVertex2i(k+12, -84);
   glVertex2i(k+6, -82);
   glVertex2i(k+8, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k+12, -90);
   glVertex2i(k+4, -84);
   glVertex2i(k+4, -88);
   glVertex2i(k+9, -93);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k+16, -92);
   glVertex2i(k+12, -90);
   glVertex2i(k+9, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(k+4, -84);
   glVertex2i(k+1, -77);
   glVertex2i(k, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(k+4, -84);
   glVertex2i(k-1, -84);
   glVertex2i(k+8, -92);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k-2, -84);
   glVertex2i(k+4, -84);
   glVertex2i(k+2, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(k-1, -84);
   glVertex2i(k+4, -84);
   glVertex2i(k+2, -92);
   glEnd();

// 02 penguins
   glColor3f(0, 0, 0);
   circle(4, 4, k-1, -75);
   glColor3f(0, 0, 0);
   circle(4, 3.5, k-2, -77);
   glColor3f(1, 1, 1);
   circle(3.5, 3.5, k+4, -90);
   circle(3.5, 3.5, k-2, -77);
   glColor3f(0, 0, 0);
   circle(1, 1, k-3, -76);
   glColor3f(1, 0, 0);
   circle(4.5, 2, k, -73);

   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(k-4, -72);
   glVertex2i(k+4, -76);
   glVertex2i(k+4, -67);
   glEnd();



//........................................End............................................
// boat penguins
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f+4, -95);
   glVertex2i(f+4, -92);
   glVertex2i(f+8, -95);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f, -95);
   glVertex2i(f+4, -92);
   glVertex2i(f+4, -95);
   glEnd();

// 01 penguins
   glutPostRedisplay();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f-4, -75);
   glVertex2i(f-8, -77);
   glVertex2i(f-4, -78);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f+2, -76);
   glVertex2i(f-4.5, -78);
   glVertex2i(f-0.5, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(f+2, -76);
   glVertex2i(f-4, -78);
   glVertex2i(f, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f+8, -86);
   glVertex2i(f+3, -74);
   glVertex2i(f, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f+16, -90);
   glVertex2i(f+12, -84);
   glVertex2i(f+6, -82);
   glVertex2i(f+8, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f+12, -90);
   glVertex2i(f+4, -84);
   glVertex2i(f+4, -88);
   glVertex2i(f+9, -93);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f+16, -92);
   glVertex2i(f+12, -90);
   glVertex2i(f+9, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(f+4, -84);
   glVertex2i(f+1, -77);
   glVertex2i(f, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(f+4, -84);
   glVertex2i(f-1, -84);
   glVertex2i(f+8, -92);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(f-2, -84);
   glVertex2i(f+4, -84);
   glVertex2i(f+2, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(f-1, -84);
   glVertex2i(f+4, -84);
   glVertex2i(f+2, -92);
   glEnd();

// 01 penguins
   glColor3f(0, 0, 0);
   circle(4, 4, f-1, -75);
   glColor3f(0, 0, 0);
   circle(4, 3.5, f-2, -77);
   glColor3f(1, 1, 1);
   circle(3.5, 3.5, f+4, -90);
   circle(3.5, 3.5, f-2, -77);
   glColor3f(0, 0, 0);
   circle(1, 1, f-3, -76);
//........................................End............................................

//........................................End............................................
// boat penguins
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m+4, -95);
   glVertex2i(m+4, -92);
   glVertex2i(m+8, -95);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m, -95);
   glVertex2i(m+4, -92);
   glVertex2i(m+4, -95);
   glEnd();

// 03 penguins
   glutPostRedisplay();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m-4, -75);
   glVertex2i(m-8, -77);
   glVertex2i(m-4, -78);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m+2, -76);
   glVertex2i(m-4.5, -78);
   glVertex2i(m-0.5, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(m+2, -76);
   glVertex2i(m-4, -78);
   glVertex2i(m, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m+8, -86);
   glVertex2i(m+3, -74);
   glVertex2i(m, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m+16, -90);
   glVertex2i(m+12, -84);
   glVertex2i(m+6, -82);
   glVertex2i(m+8, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m+12, -90);
   glVertex2i(m+4, -84);
   glVertex2i(m+4, -88);
   glVertex2i(m+9, -93);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m+16, -92);
   glVertex2i(m+12, -90);
   glVertex2i(m+9, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(m+4, -84);
   glVertex2i(m+1, -77);
   glVertex2i(m, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(m+4, -84);
   glVertex2i(m-1, -84);
   glVertex2i(m+8, -92);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(m-2, -84);
   glVertex2i(m+4, -84);
   glVertex2i(m+2, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(m-1, -84);
   glVertex2i(m+4, -84);
   glVertex2i(m+2, -92);
   glEnd();

// 03 penguins
   glColor3f(0, 0, 0);
   circle(4, 4, m-1, -75);
   glColor3f(0, 0, 0);
   circle(4, 3.5, m-2, -77);
   glColor3f(1, 1, 1);
   circle(3.5, 3.5, m+4, -90);
   circle(3.5, 3.5, m-2, -77);
   glColor3f(0, 0, 0);
   circle(1, 1, m-3, -76);


//........................................End............................................
// boat penguins
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n+4, -95);
   glVertex2i(n+4, -92);
   glVertex2i(n+8, -95);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n, -95);
   glVertex2i(n+4, -92);
   glVertex2i(n+4, -95);
   glEnd();

// 04 penguins
   glutPostRedisplay();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n-4, -75);
   glVertex2i(n-8, -77);
   glVertex2i(n-4, -78);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n+2, -76);
   glVertex2i(n-4.5, -78);
   glVertex2i(n-0.5, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(n+2, -76);
   glVertex2i(n-4, -78);
   glVertex2i(n, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n+8, -86);
   glVertex2i(n+3, -74);
   glVertex2i(n, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n+16, -90);
   glVertex2i(n+12, -84);
   glVertex2i(n+6, -82);
   glVertex2i(n+8, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n+12, -90);
   glVertex2i(n+4, -84);
   glVertex2i(n+4, -88);
   glVertex2i(n+9, -93);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n+16, -92);
   glVertex2i(n+12, -90);
   glVertex2i(n+9, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(n+4, -84);
   glVertex2i(n+1, -77);
   glVertex2i(n, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(n+4, -84);
   glVertex2i(n-1, -84);
   glVertex2i(n+8, -92);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(n-2, -84);
   glVertex2i(n+4, -84);
   glVertex2i(n+2, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(n-1, -84);
   glVertex2i(n+4, -84);
   glVertex2i(n+2, -92);
   glEnd();

// 04 penguins
   glColor3f(0, 0, 0);
   circle(4, 4, n-1, -75);
   glColor3f(0, 0, 0);
   circle(4, 3.5, n-2, -77);
   glColor3f(1, 1, 1);
   circle(3.5, 3.5, n+4, -90);
   circle(3.5, 3.5, n-2, -77);
   glColor3f(0, 0, 0);
   circle(1, 1, n-3, -76);
//........................................End............................................
//........................................End............................................
// boat penguins
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l+4, -95);
   glVertex2i(l+4, -92);
   glVertex2i(l+8, -95);
   glEnd();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l, -95);
   glVertex2i(l+4, -92);
   glVertex2i(l+4, -95);
   glEnd();

// 05 penguins
   glutPostRedisplay();
   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l-4, -75);
   glVertex2i(l-8, -77);
   glVertex2i(l-4, -78);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l+2, -76);
   glVertex2i(l-4.5, -78);
   glVertex2i(l-0.5, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(l+2, -76);
   glVertex2i(l-4, -78);
   glVertex2i(l, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l+8, -86);
   glVertex2i(l+3, -74);
   glVertex2i(l, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l+16, -90);
   glVertex2i(l+12, -84);
   glVertex2i(l+6, -82);
   glVertex2i(l+8, -86);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l+12, -90);
   glVertex2i(l+4, -84);
   glVertex2i(l+4, -88);
   glVertex2i(l+9, -93);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l+16, -92);
   glVertex2i(l+12, -90);
   glVertex2i(l+9, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(l+4, -84);
   glVertex2i(l+1, -77);
   glVertex2i(l, -86);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(l+4, -84);
   glVertex2i(l-1, -84);
   glVertex2i(l+8, -92);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l-2, -84);
   glVertex2i(l+4, -84);
   glVertex2i(l+2, -92);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(l-1, -84);
   glVertex2i(l+4, -84);
   glVertex2i(l+2, -92);
   glEnd();

// 05 penguins
   glColor3f(0, 0, 0);
   circle(4, 4, l-1, -75);
   glColor3f(0, 0, 0);
   circle(4, 3.5, l-2, -77);
   glColor3f(1, 1, 1);
   circle(3.5, 3.5, l+4, -90);
   circle(3.5, 3.5, l-2, -77);
   glColor3f(0, 0, 0);
   circle(1, 1, l-3, -76);
   glColor3f(1, 0, 0);
   circle(4.5, 2, l, -73);

   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(l-4, -72);
   glVertex2i(l+4, -76);
   glVertex2i(l+4, -67);
   glEnd();



//........................................End............................................
// 20 Snowfall
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(94, g+6);
   glVertex2i(92, g+6);
   glVertex2i(93, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(74, g+6);
   glVertex2i(72, g+6);
   glVertex2i(73, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(54, g+6);
   glVertex2i(52, g+6);
   glVertex2i(53, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(34, g+6);
   glVertex2i(32, g+6);
   glVertex2i(33, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(14, g+6);
   glVertex2i(12, g+6);
   glVertex2i(13, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(0, g+6);
   glVertex2i(0, g+6);
   glVertex2i(0, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-94, g+6);
   glVertex2i(-92, g+6);
   glVertex2i(-93, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-74, g+6);
   glVertex2i(-72, g+6);
   glVertex2i(-73, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-54, g+6);
   glVertex2i(-52, g+6);
   glVertex2i(-53, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-34, g+6);
   glVertex2i(-32, g+6);
   glVertex2i(-33, g+5);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-14, g+6);
   glVertex2i(-12, g+6);
   glVertex2i(-13, g+5);
   glEnd();


   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(84, g-16);
   glVertex2i(82, g-16);
   glVertex2i(83, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(64, g-16);
   glVertex2i(62, g-16);
   glVertex2i(63, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(44, g-16);
   glVertex2i(42, g-16);
   glVertex2i(43, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(24, g-16);
   glVertex2i(22, g-16);
   glVertex2i(23, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(4, g-16);
   glVertex2i(2, g-16);
   glVertex2i(3, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-84, g-16);
   glVertex2i(-82, g-16);
   glVertex2i(-83, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-64, g-16);
   glVertex2i(-62, g-16);
   glVertex2i(-63, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-44, g-16);
   glVertex2i(-42, g-16);
   glVertex2i(-43, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-24, g-16);
   glVertex2i(-22, g-16);
   glVertex2i(-23, g-15);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-4, g-16);
   glVertex2i(-2, g-16);
   glVertex2i(-3, g-15);
   glEnd();

// 2nd snowfall
glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(94, g-26);
   glVertex2i(92, g-26);
   glVertex2i(93, g-25);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(74, g-86);
   glVertex2i(72, g-86);
   glVertex2i(73, g-85);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(54, g-26);
   glVertex2i(52, g-26);
   glVertex2i(53, g-25);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(34, g-86);
   glVertex2i(32, g-86);
   glVertex2i(33, g-85);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(14, g-26);
   glVertex2i(12, g-26);
   glVertex2i(13, g-25);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(0, g-86);
   glVertex2i(0, g-86);
   glVertex2i(0, g-85);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-94, g-26);
   glVertex2i(-92, g-26);
   glVertex2i(-93, g-25);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-74, g-86);
   glVertex2i(-72, g-86);
   glVertex2i(-73, g-85);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-54, g-26);
   glVertex2i(-52, g-26);
   glVertex2i(-53, g-25);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-34, g-86);
   glVertex2i(-32, g-86);
   glVertex2i(-33, g-85);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-14, g-26);
   glVertex2i(-12, g-26);
   glVertex2i(-13, g-25);
   glEnd();


   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(84, g-36);
   glVertex2i(82, g-36);
   glVertex2i(83, g-35);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(64, g-96);
   glVertex2i(62, g-96);
   glVertex2i(63, g-95);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(44, g-36);
   glVertex2i(42, g-36);
   glVertex2i(43, g-35);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(24, g-96);
   glVertex2i(22, g-96);
   glVertex2i(23, g-95);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(4, g-36);
   glVertex2i(2, g-36);
   glVertex2i(3, g-35);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-84, g-96);
   glVertex2i(-82, g-96);
   glVertex2i(-83, g-95);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-64, g-36);
   glVertex2i(-62, g-36);
   glVertex2i(-63, g-35);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-44, g-96);
   glVertex2i(-42, g-96);
   glVertex2i(-43, g-95);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-24, g-36);
   glVertex2i(-22, g-36);
   glVertex2i(-23, g-35);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-4, g-96);
   glVertex2i(-2, g-96);
   glVertex2i(-3, g-95);
   glEnd();

// 3nd snowfall
glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(94, g-46);
   glVertex2i(92, g-46);
   glVertex2i(93, g-45);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(74, g-56);
   glVertex2i(72, g-56);
   glVertex2i(73, g-55);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(54, g-46);
   glVertex2i(52, g-46);
   glVertex2i(53, g-45);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(34, g-56);
   glVertex2i(32, g-56);
   glVertex2i(33, g-55);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(14, g-46);
   glVertex2i(12, g-46);
   glVertex2i(13, g-45);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(0, g-56);
   glVertex2i(0, g-56);
   glVertex2i(0, g-55);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-94, g-46);
   glVertex2i(-92, g-46);
   glVertex2i(-93, g-45);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-74, g-56);
   glVertex2i(-72, g-56);
   glVertex2i(-73, g-55);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-54, g-46);
   glVertex2i(-52, g-46);
   glVertex2i(-53, g-45);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-34, g-56);
   glVertex2i(-32, g-56);
   glVertex2i(-33, g-55);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-14, g-46);
   glVertex2i(-12, g-46);
   glVertex2i(-13, g-45);
   glEnd();


   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(84, g-66);
   glVertex2i(82, g-66);
   glVertex2i(83, g-65);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(64, g-76);
   glVertex2i(62, g-76);
   glVertex2i(63, g-75);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(44, g-66);
   glVertex2i(42, g-66);
   glVertex2i(43, g-65);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(24, g-76);
   glVertex2i(22, g-76);
   glVertex2i(23, g-75);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(4, g-66);
   glVertex2i(2, g-66);
   glVertex2i(3, g-65);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-84, g-76);
   glVertex2i(-82, g-76);
   glVertex2i(-83, g-75);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-64, g-66);
   glVertex2i(-62, g-66);
   glVertex2i(-63, g-65);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-44, g-76);
   glVertex2i(-42, g-76);
   glVertex2i(-43, g-75);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-24, g-66);
   glVertex2i(-22, g-66);
   glVertex2i(-23, g-65);
   glEnd();
   glColor3f(1, 1, 1);
   glBegin(GL_POLYGON);
   glVertex2i(-4, g-76);
   glVertex2i(-2, g-76);
   glVertex2i(-3, g-75);
   glEnd();
//........................................End............................................
  //2nd Car
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(h+12, 27);
   glVertex2i(h+4, 29);
   glVertex2i(h, 25);
   glEnd();
   glColor3f(0, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(h+11, 27);
   glVertex2i(h+4, 28);
   glVertex2i(h+1, 25);
   glEnd();
   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(h+13, 25);
   glVertex2i(h+12, 27);
   glVertex2i(h, 25);
   glVertex2i(h, 23);
   glEnd();
   glColor3f(0, 0, 0);
    circle(1.5, 1.5, h+3, 24);
    circle(1.5, 1.5, h+9, 25);
    glColor3f(1, 1, 1);
    circle(1, 1, h+3, 24);
    circle(1, 1, h+9, 25);
    glColor3f(0, 0, 0);
    circle(0.5, 0.5, h+3, 24);
    circle(0.5, 0.5, h+9, 25);

//........................................End............................................

    glColor3f(1, 1, 1);
    circle(28 ,4, 70, 40);
    circle(18 ,4, 50, 35);
    circle(18 ,4, 65, 38);

//........................................End............................................
// 20 Snowfall
if(g>=-100)
     g=g-0.020;
   else
     g=100;

// plen
if(d>=-100)
     d=d-0.020;
   else
     d=100;

// Penguins 01
if(f>=-100)
     f=f-0.050;
   else
     f=100;
// Penguins 02
if(k>=-100)
     k=k-0.050;
   else
     k=100;
// Penguins 03
if(m>=-100)
     m=m-0.050;
   else
     m=100;
// Penguins 04
if(n>=-100)
     n=n-0.050;
   else
     n=100;
// Penguins 05
if(l>=-80)
     l=l-0.050;
   else
     l=100;
// Car 01
      if(p<=100)
     p=p+0.055;
   else
     p=-100;
// Car 02
if(h<=33)
     h=h+0.020;
   else
     h=33;

// Cloud 01
if(a<=100)
     a=a+0.005;
   else
     a=-100;

// Cloud 02
if(s<=100)
     s=s+0.005;
   else
     s=-100;

    glutSwapBuffers();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
