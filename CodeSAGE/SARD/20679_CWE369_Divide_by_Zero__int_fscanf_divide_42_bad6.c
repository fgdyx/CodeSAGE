#ifndef VAR1
static int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 return VAR2;
}
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN3(100 / VAR2);
}
#endif
