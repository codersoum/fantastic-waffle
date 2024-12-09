public class Box 
{
 double width;
 double height;
 double length;
 Box(double w,double h,double l)
 {
  width=w;
  height=h;
  length=l;
 }
 double vol()
 {
  return(width*height*length);
 }
  public static void main(String[] args)
 {
  Box b1=new Box(3.6,6.9,7.8);
  Box b2=new Box(6.5,5.6,7.4);
  System.out.println("Volume is "+b1.vol());
  System.out.println("Volume is "+b2.vol());
 }
}

