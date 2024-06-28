#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR3;
 }
 if(FUN2())
 {
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR4 = VAR2 * VAR2;
 FUN3(VAR4);
 }
 }
}
#endif
