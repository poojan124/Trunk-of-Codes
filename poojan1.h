/* graphics.h */

 #ifndef __GRAPHICS_H
 #define __GRAPHICS_H



 using namespace std;

 #define colmult 256

 static const int GRAPHICS_SURFACE_0 = 0;
 static const int GRAPHICS_SURFACE_1 = 1;

 static const int TEXT_ALIGN_LEFT = 0;
 static const int TEXT_ALIGN_RIGHT = 1;
 static const int TEXT_ALIGN_CENTER = 2;

 static const int cGRIDPOINTS = 0;
 static const int cBACKGROUND = 1;
 static const int cWIREPOINTCONNECTED1 = 2;
 static const int cWIREPOINTCONNECTED2 = 3;
 static const int cWIREPOINTDISCONNECTED1 = 4;
 static const int cWIREPOINTDISCONNECTED2 = 5;
 static const int cWIRESELECTED = 6;
 static const int cWIREUNSELECTED = 7;
 static const int cCOMPONENTSELECTED = 8;
 static const int cCOMPONENTINVALID = 9;
 static const int cCOMPONENT = 10;
 static const int cCOMPONENTSHADOW = 11;
 static const int cCOMPONENTEXECUTING = 12;
 static const int cCOMPONENTLABEL = 13;
 static const int cCOMPONENTLABELSELECTED = 14;
 static const int cPIN = 15;
 static const int cWIREPOINTINVALID = 16;
 static const int cCROSSHAIR = 17;



 static GdkGC *GCS[18];

 class Point{
  public:
   Point(int x, int y);
   Point(int x, int y, void *tag);
   Point(Point *p);
   int x;
   int y;
   void *tag;
 };


 void show_msg(const char *title, const char *c);

 class Graphics{

  public:
   Graphics(GtkWidget *drawingarea, int width, int height, int nbsurfaces);
   Graphics(GtkWidget *drawingarea, int nbsurfaces);
   ~Graphics();

   void create_colors();

   int width();
   int height();

   void draw_line(int x1, int y1, int x2, int y2, int colorindex);
   void draw_rectangle(int x, int y, int width, int height, bool fill, int colorindex);
   void draw_pixmap(GdkPixmap *pixmap, int x, int y, int width, int height);
   void draw_pixmap(gchar **pixmap, int x, int y, int width, int height);
   void render(GdkPixbuf *pixbuf, int x, int y, int width, int height);


   void clear(int color_index);
   void put_pixel(int x, int y, int colorindex);

   void draw_text(int x, int y, const char *text, int colorindex);
   void draw_text(int x, int y, const char *text, int colorindex, int alignment);
   void apply();
   void repaint();

   void copy_surface(int surface);
   void set_draw_surface(int surface);

   GdkPixmap *currentpixmap;
   vector<GdkPixmap*> pixmaps;

  private:

   GdkGC *make_gc(int red, int green, int blue);

   GtkWidget *drawingarea;
   GdkColormap *colormap;

  public:
   int _width;
   int _height;

 };


 #endif
