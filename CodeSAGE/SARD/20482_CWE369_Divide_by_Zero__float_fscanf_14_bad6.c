#ifndef VAR1
void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use a value input from the console using fscanf() */
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR4 = (int)(100.0 / VAR2);
 FUN2(VAR4);
 }
 }
}
#endif
