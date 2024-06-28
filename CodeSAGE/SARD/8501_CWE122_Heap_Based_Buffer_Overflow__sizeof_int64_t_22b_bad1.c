#ifndef VAR1
extern int VAR2;
VAR3 * FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR4 = (VAR3 *)malloc(sizeof(VAR4));
 *VAR4 = 2147483643LL;
 }
 return VAR4;
}
#endif
