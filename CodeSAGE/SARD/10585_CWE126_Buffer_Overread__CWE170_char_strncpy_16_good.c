#ifndef VAR1
static void FUN1()
{
 while(1)
 {
 {
 char VAR2[150], VAR3[100];
 memset(VAR2, '', 149);
 VAR2[149] = '';
 strncpy(VAR3, VAR2, 99);
 VAR3[99] = '';
 FUN2(VAR3);
 }
 break;
 }
}
void FUN3()
{
 FUN1();
}
#endif
