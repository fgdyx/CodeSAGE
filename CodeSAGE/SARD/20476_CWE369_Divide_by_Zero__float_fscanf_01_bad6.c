#ifndef VAR1
void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 /* POTENTIAL FLAW: Use a value input from the console using fscanf() */
 fscanf (stdin, "", &VAR2);
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
}
#endif
