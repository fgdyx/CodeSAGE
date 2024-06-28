#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR3 = VAR2 + 1;
 FUN2(VAR3);
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
