#ifndef VAR1
void FUN1(VAR2 * * VAR3)
{
 VAR2 * VAR4 = *VAR3;
 FUN2(VAR4->VAR5);
 FUN2(VAR4->VAR6);
}
void FUN3(VAR2 * * VAR3)
{
 VAR2 * VAR4 = *VAR3;
 VAR4 = (VAR2 *)malloc(sizeof(VAR2));
 VAR4->VAR5 = 5;
 VAR4->VAR6 = 6;
 FUN2(VAR4->VAR5);
 FUN2(VAR4->VAR6);
}
#endif
