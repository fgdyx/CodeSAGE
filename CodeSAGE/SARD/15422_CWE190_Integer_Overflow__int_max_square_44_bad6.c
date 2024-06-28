#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
void FUN3()
{
 int VAR2;
 void (*VAR4) (int) = VAR5;
 VAR2 = 0;
 /* POTENTIAL FLAW: Use the maximum value for this type */
 VAR2 = VAR6;
 FUN4(VAR2);
}
#endif
