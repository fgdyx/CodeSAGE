#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 / VAR2);
 }
}
#endif
