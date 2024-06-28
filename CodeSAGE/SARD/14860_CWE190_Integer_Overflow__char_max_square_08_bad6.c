#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR3;
 }
 if(FUN2())
 {
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR4 = VAR2 * VAR2;
 FUN3(VAR4);
 }
 }
}
#endif
