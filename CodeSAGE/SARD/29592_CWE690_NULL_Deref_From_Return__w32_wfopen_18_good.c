#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = _wfopen(VAR4"", VAR4"");
 goto VAR5;
VAR5:
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
}
void FUN2()
{
 FUN1();
}
#endif
