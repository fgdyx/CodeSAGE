int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 for(VAR1 = 0; ; VAR1++)
 {
 if (VAR1 > 10) break;
 /* BAD */
 VAR2[10] = '';
 }
 return 0;
}
