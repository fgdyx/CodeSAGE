#ifndef VAR1
static int VAR2 = 0;
static void FUN1(float VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR4 = (int)(100.0 / VAR3);
 FUN2(VAR4);
 }
 }
}
void FUN3()
{
 float VAR3;
 VAR3 = 0.0F;
 /* POTENTIAL FLAW: Use a value input from the console using fscanf() */
 fscanf (stdin, "", &VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
