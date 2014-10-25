GLint countlamp=0;GLUquadricObj *qobj;
 void candleLamp()
{               
                GLfloat color1r,color2r,color3r,color1g,color2g,color3g,color1b,color2b,color3b;
                GLfloat a=0.4,b=0.45,c=0.5;

                    //this segment animates the flickering of the lamp
                    if(countlamp<5)
                    {
                        color1r=0.9;
                        color1g=0.5;
                        color1b=0;
                        color2r=0.9;
                        color2g=0.7;
                        color2b=0;
                        color3r=0.9;
                        color3g=0.8;
                        color3b=0.0;
                        countlamp++;
                    }
                    else if(countlamp<10)
                    {
                        color1r=0.9;
                        color1g=0.6;
                        color1b=0.0;
                        color2r=0.9;
                        color2g=0.8;
                        color2b=0;
                        color3r=0.9;
                        color3g=0.9;
                        color3b=0.0;
                        countlamp++;
                    }   
                    else if ( countlamp<15)
                    {   color1r=0.9;
                        color1g=0.7;
                        color1b=0;
                        color2r=0.9;
                        color2g=0.8;
                        color2b=0;
                        color3r=0.9;
                        color3g=0.99;
                        color3b=0.0;
                        countlamp++;}
                    
                    else
                    {  
                        color1r=0.9;
                        color1g=0.6;
                        color1b=0.0;
                        color2r=0.9;
                        color2g=0.8;
                        color2b=0;
                        color3r=0.9;
                        color3g=0.9;
                        color3b=0.0;   
                        countlamp=0;
                    }
                   
      glColor3f(0.2,0,0);
      glPushMatrix();
                qobj=gluNewQuadric();
                gluQuadricDrawStyle(qobj, GLU_FILL); /* smooth shaded */
                gluQuadricNormals(qobj, GLU_SMOOTH);
            
            glPushMatrix();
                glRotated(-90, 1.0, 0.0, 0.0);                
                gluCylinder(qobj, 0.1, 0.03, 0.1, 15, 5);
            glPopMatrix();
            glColor3f(0.75,0.53,0.32);
            glPushMatrix();
                glTranslatef(0.0,0.1,0);
                glRotated(-90, 1.0, 0.0, 0.0);
                gluCylinder(qobj, 0.03, 0.03, 0.15, 15, 5);
            glPopMatrix();
            glColor3f(0.67,0.51,0.56);
            glPushMatrix();
                glTranslatef(0.0,0.25,0);
                glRotated(-90, 1.0, 0.0, 0.0);
                gluCylinder(qobj, 0.01, 0.01, 0.15, 15, 5);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(0.0,0.40,-0.15);
                glRotated(-0, 1.0, 0.0, 0.0);
                gluCylinder(qobj, 0.01, 0.01, 0.3, 15, 5);
            glPopMatrix();
             glPushMatrix();
                glTranslatef(0.0,0.40,-0.15);
                glPushMatrix();
                    glRotated(-90, 1.0, 0.0, 0.0);
                    gluCylinder(qobj, 0.01, 0.01, 0.1, 15, 5);
                glPopMatrix();
                glTranslatef(0,0.0,0.3);
                glPushMatrix();
                    glRotated(-90, 1.0, 0.0, 0.0);
                    gluCylinder(qobj, 0.01, 0.01, 0.1, 15, 5);
                glPopMatrix();
                glColor3f(0.65,0.2,0.1);
                glPushMatrix();
                    glTranslatef(0,0.1,0);
                    glPushMatrix();            
                        glRotated(-90, 1.0, 0.0, 0.0);
                        gluCylinder(qobj, 0.08, 0.08, 0.01, 15, 5);
                        gluDisk(qobj, 0, 0.08, 32, 32);
                    glPopMatrix();
                    glTranslatef(0,0.0,-0.3);
                    glPushMatrix();            
                        glRotated(-90, 1.0, 0.0, 0.0);
                        gluCylinder(qobj, 0.08, 0.08, 0.01, 15, 5);
                        gluDisk(qobj, 0, 0.08, 32, 32);
                    glPopMatrix();
                    
                    glPushMatrix();   
                        glTranslatef(0,0.01,0);  
                        glColor3f(0.6,0.6,0.6);
                        glPushMatrix();       
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.05, 0.05, 0.07, 15, 5);
                            gluDisk(qobj, 0, 0.05, 32, 32);
                        glPopMatrix();
                        
                        glTranslatef(0,0.08,0.0);  
                        glColor3f(0.9,0.89,0.86);
                        glPushMatrix();       
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.01, 0.01, 0.07, 15, 5);
                            gluDisk(qobj, 0, 0.01, 32, 32);
                        glPopMatrix();
                        //flame code start
                        glColor3f(color1r,color1g,color1b);
                        glTranslatef(0,0.07,0);
                        
                        glPushMatrix();
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.001, 0.01, 0.02, 15, 5);
                        glPopMatrix();
                        glColor3f(color2r,color2g,color2b);
                        glTranslatef(0,0.02,0);
                        glPushMatrix();
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.01, 0.01, 0.01, 15, 5);
                        glPopMatrix();
                        glColor3f(color3r, color3g,  color3b);
                        glTranslatef(0,0.01,0);
                        glPushMatrix();
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.01, 0.001, 0.02, 15, 5);
                        glPopMatrix(); 
                        //flame code  end                        
                    glPopMatrix();
                    //symmetric  part of the lamp
                    glPushMatrix();   
                        glTranslatef(0,0.01,0.3);  
                        glColor3f(0.6,0.6,0.6);
                        glPushMatrix();       
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.05, 0.05, 0.07, 15, 5);
                            gluDisk(qobj, 0, 0.05, 32, 32);
                        glPopMatrix();
                        
                        glTranslatef(0,0.08,0.0);  
                        glColor3f(0.9,0.89,0.86);
                        glPushMatrix();       
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.01, 0.01, 0.07, 15, 5);
                            gluDisk(qobj, 0, 0.01, 32, 32);
                        glPopMatrix(); 
                        //flame code starts
                        
                        glColor3f(color1r,color1g,color1b);
                        glTranslatef(0,0.07,0);
                        glPushMatrix();
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.001, 0.01, 0.02, 15, 5);
                        glPopMatrix();
                        glColor3f(color2r,color2g,color2b);
                        glTranslatef(0,0.02,0);
                        glPushMatrix();
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.01, 0.01, 0.01, 15, 5);
                        glPopMatrix();
                        glColor3f(color3r,color3g,color3b);
                        glTranslatef(0,0.01,0);
                        glPushMatrix();
                            glRotated(-90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, 0.01, 0.001, 0.02, 15, 5);
                        glPopMatrix(); 
                        //flame  code end                                               
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
      glPopMatrix();
}    

void tableLeg( double thick, double len)
{
     glPushMatrix();
          glTranslated(0,len/2,0);
          glScaled(thick,len,thick);
          glutSolidCube(1.0);
     glPopMatrix();
}

void  roundTable(double diameter, double tableThick, double legThick, double legLen)
{
	double  tableWid = diameter;
    glColor3f(0.27,0.12,0.05);
        
    double dist = 0.95*tableWid/2.0 - legThick/2.0;
    glPushMatrix();
        glTranslated(dist,0, dist);
        tableLeg(legThick,legLen);
        glPushMatrix();
            glTranslated(-2*dist,0, 0);
            tableLeg(legThick,legLen);
            glPushMatrix();
                glTranslated(0,0,-2*dist);
                tableLeg(legThick,legLen);
                glPushMatrix();
                    glTranslated(2*dist,0,0);
                    tableLeg(legThick,legLen);
                    glPushMatrix();
                        glColor3f(0.45,0.2,0.1);
                        glPushMatrix();
                            qobj=gluNewQuadric();
                            gluQuadricDrawStyle(qobj, GLU_FILL);
                            gluQuadricNormals(qobj, GLU_SMOOTH); //smooth shaded
                            glTranslatef((-tableWid/2.0+legThick-tableWid/26) , legLen , (tableWid/2.0-legThick/2.0-tableWid/26));
                            glRotated(+90, 1.0, 0.0, 0.0);
                            gluCylinder(qobj, tableWid*0.8, tableWid*0.8, tableThick, 15, 5);
                            gluDisk(qobj, 0, tableWid*0.8, 32, 32);
                        glPopMatrix();
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();

}


void chairTop(double chairWid, double topThickness, double legThick, double legLen)
 {
      glColor3f(0.35,0.2,0.05);
      double dist  = 0.95*chairWid/2.0 - legThick/2.0;
      glPushMatrix();
          glTranslated(dist ,0, dist );
          tableLeg(legThick,legLen);
          glPushMatrix();
              glTranslated(-2*dist ,0, 0);
              tableLeg(legThick,legLen);
              glPushMatrix();
                  glTranslated(0,0,-2*dist );
                  tableLeg(legThick,legLen);
                  glPushMatrix();
                      glTranslated(2*dist ,0,0);
                      tableLeg(legThick,legLen);
                      glPushMatrix();
                          glColor3f(0.7,0.2,0.1);
                          glPushMatrix();  
                              glTranslatef(-chairWid/2.0+legThick-chairWid/24 ,legLen,chairWid/2.0-legThick/2.0-chairWid/26  );
                              glScaled(chairWid*0.96,topThickness,chairWid);
                              glutSolidCube(1);
                          glPopMatrix();
                      glPopMatrix();
                  glPopMatrix();
              glPopMatrix();
          glPopMatrix();
      glPopMatrix();
 }

void chair(double  legThick,  double  legLen,  double  chairWidth )
{   
    chairTop(chairWidth,legThick/2,legThick,legLen);
    glPushMatrix();
        glColor3f(0.45,0.2,0.1);
        glTranslatef(2*legThick,legLen,-2*legThick);
            tableLeg(legThick,legLen);
        glTranslatef(0,0,legLen-legThick);
            tableLeg(legThick,legLen);
        glTranslatef(0,legLen,legThick/2);
        glRotatef(90,-1,0,0);
            tableLeg(legThick,legLen);
    glPopMatrix();
    
}
void  tableFork()
 {
        glPushMatrix();
           glScaled(1.8,1.8,1.8);
           glPushMatrix();
           
               glTranslatef(-0.05,0,0);
                   glPushMatrix();
                       glColor3f(0.5,0.5,0.5);
                           glutSolidCone(0.005,0.1,27,16);
                       glTranslatef(0.02,0,0);
                           glutSolidCone(0.005,0.1,27,16);
                       glTranslatef(0.02,0,0);
                           glutSolidCone(0.005,0.1,27,16);
                       glTranslatef(-0.02,0,0);
                       
                       glPushMatrix();
                       glScaled(0.045,0.01,0.05);
                           glutSolidCube(1);
                       glPopMatrix();
                       
                       glTranslatef(0,0,-0.1);
     
                       glPushMatrix();
                           glScaled(0.01,0.01,0.2);
                           glutSolidCube(1);
                       glPopMatrix();
                    glPopMatrix();
            glPopMatrix();
        glPopMatrix();
 }
