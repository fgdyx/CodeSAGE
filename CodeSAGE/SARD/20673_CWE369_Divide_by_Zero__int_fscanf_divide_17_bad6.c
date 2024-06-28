#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 / VAR4);
 }
}
#endif
