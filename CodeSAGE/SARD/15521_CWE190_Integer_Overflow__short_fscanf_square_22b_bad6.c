#ifndef VAR1
extern int VAR2;
void FUN1(short VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
 }
}
#endif
