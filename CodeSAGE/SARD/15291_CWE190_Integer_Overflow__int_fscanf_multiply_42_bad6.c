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
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
 int VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
}
#endif
