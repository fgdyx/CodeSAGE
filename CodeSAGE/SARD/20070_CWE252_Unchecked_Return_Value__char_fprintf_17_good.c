#ifndef VAR1
static void FUN1()
{
 int VAR2;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 if (fprintf(VAR3, "", "") < 0)
 {
 FUN2("");
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
