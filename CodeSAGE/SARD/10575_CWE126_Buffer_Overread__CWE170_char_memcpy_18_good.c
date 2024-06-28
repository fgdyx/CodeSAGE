#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 char VAR3[150], VAR4[100];
 memset(VAR3, '', 149);
 VAR3[149] = '';
 memcpy(VAR4, VAR3, 99*sizeof(char));
 VAR4[99] = '';
 FUN2(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
