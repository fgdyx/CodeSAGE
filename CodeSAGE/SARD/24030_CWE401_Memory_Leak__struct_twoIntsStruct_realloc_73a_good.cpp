#ifndef VAR1
void FUN1(VAR2<struct VAR3 *> VAR4);
static void FUN2()
{
 struct VAR3 * VAR5;
 VAR2<struct VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = (struct VAR3 *)FUN3(100*sizeof(struct VAR3));
 VAR5[0].VAR6 = 0;
 VAR5[0].VAR7 = 0;
 FUN4((VAR8 *)&VAR5[0]);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 FUN1(VAR4);
}
void FUN6(VAR2<struct VAR3 *> VAR4);
static void FUN7()
{
 struct VAR3 * VAR5;
 VAR2<struct VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = (struct VAR3 *)realloc(VAR5, 100*sizeof(struct VAR3));
 VAR5[0].VAR6 = 0;
 VAR5[0].VAR7 = 0;
 FUN4((VAR8 *)&VAR5[0]);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 FUN6(VAR4);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
