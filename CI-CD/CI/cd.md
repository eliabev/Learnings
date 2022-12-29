# CI/CD

Repo: <https://github.com/eliabev/coursera-ci-cd>

**CI** é processo de continuamente integrar sua branch com a *main*. Trunk Based Development. Fases: Plan, Code, Build e Test.
**CD** é a entrega contínua, após o CI, preparando o código para o release. Continuous Delivery é quando mandamos para um serve ainda nos ambientes de baixo nível. Continuous Deployment é quando mandamos para produção. As fases do CD - Delivery - são: Release, Deploy e Operate.
A pipeline do DevOps é: Plan, Develop, Build, Test, Deploy. CI/CD fica nas fases de Build e Test.

## Ferramentas

**Jenkins**: ferramenta de CI/CD instalada no servidor onde o build central acontece. Uma das coisas que o tornaram popular, além de ser open source, é que podemos rodar nosso próprio server jenkins. Possui plugins para integração com docker, maven, etc. Seus arquivos são escritos em Groovy, o que exige esse conhecimento do desenvolvedor. É necessário iniciar um projeto direto do site Jenkins, o que é outro ponto negativo. É necessário criar um Jenkinsfile na raiz do projeto.
**Circle CI**: plataforma que pode ser usada para implementar as práticas de DevOps. Definimos o workflow dentro de um circle.yaml. Não é open source!!!!!!!
**Travis**: serviço de CI hospedado que ajuda o build e teste de softwares hospedados no github/bitbucket. Workflow fica dentro do .travis.yaml.
**GitHub Actions**: plataforma de CI/CD que automatiza o workflow - teste, deploy. Somente para o github.

***IaC*** (Infrastructure as Code) descreve sua infraestrutura em formato textual para uma fácil configuração do sistema - formato de texto parecido com código. Isso permite "compartilhar" o ambiente com membros do time. Pode ser declarativo ou imperativo.
**Inventory Files**: lista de servers e dispositivos na forma de IP ou hostname.
**VAR Files**: nome de variáveis que podem ser necessárias para operar.
**Playbook**: contém qualquer número de plays. Plays contêm as instruções que devem ser carregadas para cada server ou dispositivo.

A automação feita pelo IaC aumenta em grande nível a velocidade de provisionamento da infraestrutura para os ambientes de dev, test e prod.

**SCM** (Source Code Management) - rastreia o código fonte durante o desenvolvimento, tornando mais fácil o rollback em caso de falhas. E permite que várias pessoas trabalhem em conjunto. AKA VCS's.

**Social Coding** - Podemos dizer que é *Open Source para inner source*. Comunidades seguiam essa prática, que agora entrou nas empresas. Antes, os repositórios eram sempre privados, fazendo com que os códigos não pudessem ser reaproveitados. Hoje, devs são encorajados a fazer fork do projeto e contribuir com ele, mesmo o código de empresas.
