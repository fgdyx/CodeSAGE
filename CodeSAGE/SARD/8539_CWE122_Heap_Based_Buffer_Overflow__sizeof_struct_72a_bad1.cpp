#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR5 = (VAR3 *)malloc(sizeof(VAR5));
 VAR5->VAR6 = 1;
 VAR5->VAR7 = 2;
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 VAR4.FUN3(VAR4.FUN4(), 1, VAR5);
 FUN1(VAR4);
}
#endif
