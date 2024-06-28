#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 char VAR2[150], VAR3[100];
 memset(VAR2, '', 149);
 VAR2[149] = '';
 memcpy(VAR3, VAR2, 99*sizeof(char));
 VAR3[99] = '';
 FUN2(VAR3);
 }
 break;
 }
}
static void FUN3()
{
 switch(6)
 {
 case 6:
 {
 char VAR2[150], VAR3[100];
 memset(VAR2, '', 149);
 VAR2[149] = '';
 memcpy(VAR3, VAR2, 99*sizeof(char));
 VAR3[99] = '';
 FUN2(VAR3);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
