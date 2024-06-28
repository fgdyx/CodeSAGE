#ifndef VAR1
static int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 return VAR2;
}
void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR3 = VAR2 * VAR2;
 FUN4(VAR3);
 }
}
#endif
