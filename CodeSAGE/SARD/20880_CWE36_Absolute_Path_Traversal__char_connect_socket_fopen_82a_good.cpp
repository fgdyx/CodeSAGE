#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 VAR6* VAR7 = new VAR8;
 VAR7->FUN2(VAR2);
 delete VAR7;
}
void FUN3()
{
 FUN1();
}
#endif
