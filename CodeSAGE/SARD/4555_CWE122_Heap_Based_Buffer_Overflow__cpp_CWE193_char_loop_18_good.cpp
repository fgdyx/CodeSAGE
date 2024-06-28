#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new char[10+1];
 {
 char VAR3[10+1] = VAR4;
 size_t VAR5, VAR6;
 VAR6 = strlen(VAR3);
 for (VAR5 = 0; VAR5 < VAR6 + 1; VAR5++)
 {
 VAR2[VAR5] = VAR3[VAR5];
 }
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
