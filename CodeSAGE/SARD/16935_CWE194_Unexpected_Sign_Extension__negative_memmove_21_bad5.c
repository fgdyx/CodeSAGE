#ifndef VAR1
static int VAR2 = 0;
static short FUN1(short VAR3)
{
 if(VAR2)
 {
 /* FLAW: Use a negative number */
 VAR3 = -1;
 }
 return VAR3;
}
void FUN2()
{
 short VAR3;
 VAR3 = 0;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memmove(VAR5, VAR4, VAR3);
 VAR5[VAR3] = '';
 }
 FUN3(VAR5);
 }
}
#endif
