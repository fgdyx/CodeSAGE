#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR4;
 }
 if(VAR3)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR5 = VAR2 * VAR2;
 FUN2(VAR5);
 }
 }
}
#endif
