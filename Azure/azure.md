# Azure

## Azure Portal

Recurso visual que ajuda a criar e gerenciar seus recursos.

***SLA*** é o *Service Level Agreement*, um acordo entre fornecedor e cliente sobre a disponibilidade do serviço

## Benefícios

**Alta Disponibilidade:** assegura a alta disponibilidade de serviços, aplicações, etc.
**Escalabilidade:** se refere à habilidade de ajustar os recursos para atender às demandas. A escalabilidade da Azure não sobrecarrega os custos, já que o cliente só paga de fato pelo que usar. ***Vertical*** - adicionamos mais CPU ou RAM à VM. ***Horizontal*** - adicionamos novos containers ou VM.
**Confiabilidade:** habilidade do sistema de se recuperar de uma falha e continuar a funcionar. A infraestrutura é confiável e resiliente graças à arquitetura descentralizada.
**Previsibilidade:** garante que podemos avançar com confiança, já que podemos prever tanto a performance quanto os custos.

## Modelos de Deploy

**Cloud Pública:** serviços disponíveis na internet para qualquer um que queira pagar. *Não há capital necessário para escalar. Apps podem rapidamente ser providos e removidos. Pagam somente pelo o que usar*. **Cloud Privada:** disponível apenas para membros de uma organização. *Hardware precisa ser comprado para iniciar; Organizações têm total controle sobre recursos e seguranças. Organizações são responsáveis pela manutenção*. **Cloud Híbrida:** dados e apps são compartilhados entre pública e privada.

## Assinaturas, Grupos de Gerenciamento e Recursos

**Recursos:** são instâncias de serviços que você cria - VM's, DB's, etc.
**Grupos de Recursos:** os recursos são combinados em grupos, que atuam como um contâiner lógicoonde os recursos são implantados e gerenciados.
**Assinaturas:** agrupa contas de usuários e recursos criados por elas. Há limites ou cotas na quantidade de recursos criados e usados.
**Grupos de Gerenciamento:** ajudam a gerenciar os acessos, a política e a conformidade para várias asinaturas. Todas as assinaturas herdam automaticamente as condições aplicadas ao grupo de gerenciamento.

## Região

É uma área geográfica do planeta que contém pelo menos um data center próximo e conectados a uma rede de baixa latência.

## Serviços Computacionais

**VM:** São emulações por software de computadores físicos. Processador, memória, armazenamento e recursos de rede virtuais. VM's provêm *IaaS*.
**Instâncias de Container e Azure Kubernetes Service:** deploy e gerenciamento de containers.
**App Service:** API, web e apps facilmente construídos, deployados e escalados em qualquer plataforma. É um PaaS. Pode ser integrado com GitHub, Azure DevOps, etc.
**Fucntions:** ideal quando nos preocupamos apenas com o código rodando no serviço, sem preocupações com a plataforma ou infraestrutura.

Quando criamos VM's, a escolha da imagem é fundamental, pois ela funciona como um template para a criação da VM - incluindo SO, softwares, kit de desenvolvimento, etc.

**VM Scale Set:** permite que você crie e gerencie um grupo de VM idênticas. O número de instâncias de VM's pode aumentar automaticamente, em resposta à demanda ou agendas.

## Redes Virtuais

Azure Virtual Network é um IaaS. As redes virtuais da Azure permitem que os recursos do Azure, como apps e db, comuniquem-se uns com os outros, com usuários e computadores. Oferecem: Isolamento e segmentação; comunicação pela internet; comunicação entre recursos Azure; comunicação com recursos locais; roteamento de tráfego; filtragem de tráfego; conexão com redes virtuais.

**Gateways VPN**: um gateway/portão virtual. VPN da Azure são deployadas numa subrede e permite as seguintes conexões:

* Conexão de datacenters com redes, através de conexões *site-to-site*;
* Conexão de dispositivos individuais com a rede através de conexão *point-to-site*;
* De redes virtuais com outras redes virtuais, através de conexão *network-to-network*

**VPN Baseada em Política**: especificam os IP's que devem ser encriptados em cada tunnel. Esse tipo de VPN deve ser usado em situações que o requerem, como dispositivos legados, com compatibilidade apenas a redes VPN baseadas em política.
**VPN Baseada em Rota**: é menos trabalhoso fazer dessa forma. São mais resilientes a mudanças de topologia.

## Azure Storage

**Disk Storage**: provê discos para as VM Azure. Apps e serviços podem acessar esses discos. Podemos usar SSD e HD.
**Blob Storage**: não te obriga a armazenar um tipo específico de dados. Pode ser texto ou dados binários. Podemos subir diversos arquivos simultaneamente. É ideal para:

* Prover imagens ou documentos diretamente para sites;
* Armazenamento de arquivos para uso distribuído;
* Streaming de vídeos e áudio;
* Armazenamento de dados para backup;
* Armazenamento de dados para análise;
* Armazenamento de até 8TB de dados para VM's
***Níveis de acesso dos Blobs***:
* Hot Tier - dados acessados frequentemente;
* Cool Tier - dados acessados com frequência a cada 30 dias, pelo menos (como NF's);
* Archive Tier - dados raramente acessados.

Dados do nível *cool* podem admitir níveis baixos de disponibilidade, mas mantêm os altos níveis de durabilidade

## Azure AD
É um serviço que permite logar e acessar serviços cloud da Microsoft e criados pelo dev. Azure AD pode ser usado por:
 * Administradores TI: controlam acesso a aplicações e serviços, baseado em suas necessidades de negócio.;
 * Devs: garantem métodos padronizados de acesso às aplicações construídas, adicionando funções de SSO à aplicação ou permitindo que um app funcione com determinado nível de credencial;
 * Usuários: podem gerenciar seus perfis/identidades e realizar manutenções, como reset de senhas.

 O Azure AD providencia serviços de:
 * Autenticação: inclui verificar a identidade para acessar aplicações e serviços. Também inclui funcionalidades como auto reset de senha, MFA, lista de senhas banidas e serviços de smart lockout;
 * Single sign-on: SSO permite lembrar apenas de um login e senha para acessar diversos serviços.;
 * Gerenciamento de apps: é possível gerenciar seus apps na nuvem e "on-premises" usando o Azure AD. Funcionalidades como Proxy de app, apps SaaS, portal My Apps e SSO proporcionam uma melhor experiência para o user;
 * Gerenciamento de dispositivo: junto das contas individuais, Azure permite o registro de dispositivos. Isso permite que os dispositivos sejam gerenciados por serviços com o Intune