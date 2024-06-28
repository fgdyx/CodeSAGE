#ifndef VAR1
void FUN1(struct VAR2 * &VAR3)
{
 VAR3 = (struct VAR2 *)FUN2(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
}
void FUN4(struct VAR2 * &VAR3)
{
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3((VAR6 *)&VAR3[0]);
}
#endif
