#ifndef VAR1
void FUN1(VAR2<int> VAR3);
void FUN2()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
#endif
