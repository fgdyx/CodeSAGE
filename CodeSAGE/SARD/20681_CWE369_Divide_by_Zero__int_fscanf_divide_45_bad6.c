#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 / VAR2);
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
