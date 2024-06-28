#VAR1 <signal.VAR2>
#VAR1 <VAR3/VAR4.VAR2>
#VAR1 <VAR5.VAR2>
void FUN1(int VAR6)
{
 char VAR7[10];
 /* BAD */
 VAR7[17] = '';
 return;
}
int main(int argc, char *argv[])
{
 struct itimerval VAR8, VAR9;
 signal(VAR10, &VAR11);
 VAR8.VAR12.VAR13 = 1;
 VAR8.VAR12.VAR14 = 0;
 VAR8.VAR15.VAR13 = 1;
 VAR8.VAR15.VAR14 = 0;
 FUN2(VAR16, &VAR8, &VAR9 );
 FUN3();
 return 0;
}
