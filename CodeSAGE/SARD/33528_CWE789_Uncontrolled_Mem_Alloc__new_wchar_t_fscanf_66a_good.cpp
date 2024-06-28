#ifndef VAR1
void FUN1(size_t VAR2[]);
static void FUN2()
{
 size_t VAR3;
 size_t VAR2[5];
 VAR3 = 0;
 VAR3 = 20;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(size_t VAR2[]);
static void FUN4()
{
 size_t VAR3;
 size_t VAR2[5];
 VAR3 = 0;
 fscanf(stdin, "", &VAR3);
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
