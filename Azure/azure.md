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

# Região

É uma área geográfica do planeta que contém pelo menos um data center próximo e conectados a uma rede de baixa latência.