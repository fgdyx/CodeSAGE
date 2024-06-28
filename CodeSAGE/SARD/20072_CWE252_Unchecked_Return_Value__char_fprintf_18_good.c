#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 if (fprintf(VAR3, "", "") < 0)
 {
 FUN2("");
 }
}
void FUN3()
{
 FUN1();
}
#endif
