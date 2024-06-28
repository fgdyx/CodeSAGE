#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char * VAR5 = (char *)FUN3(sizeof(VAR6));
 char * VAR7 = (char *)FUN3(sizeof(VAR8));
 /* POTENTIAL FLAW: Initialize data to a buffer smaller than the sizeof(TwoIntsClass) */
 VAR4 = VAR5;
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
#endif
