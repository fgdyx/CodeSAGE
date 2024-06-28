#ifndef VAR1
static int VAR2 = 0;
static void FUN1(int VAR3)
{
 if(VAR2)
 {
 if(VAR3 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
 }
}
void FUN3()
{
 int VAR3;
 VAR3 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
