#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = 5;
 VAR3->VAR5 = 6;
}
void FUN2(VAR2 * &VAR3)
{
 ;
}
#endif
